// Copyright (c) 2009-2010 Sa_toshikamoto
// Copyright (c) 2009-2016 The Bitcoin Core developers
// Copyright (c) 2021-2022 The Dedcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_AMOUNT_H
#define BITCOIN_AMOUNT_H

#include "serialize.h"

#include <stdlib.h>
#include <string>

/** We introduce farthings as the sa_toshi alternative (Can be negative) */
/** One Dedcoin cycle is 1048576 farthings, one Dedcoin is 128 Dedcoin cycles */
typedef int64_t CAmount;

static const CAmount COIN = 134217728;
static const CAmount CYCLE = 1048576;

extern const std::string CURRENCY_UNIT;

/** No amount larger than this (in farthings) is valid.
 *
 * Note that this constant is *not* the total money supply, which in Bitcoin
 * currently happens to be less than 21,000,000 BTC for various reasons, but
 * rather a sanity check. As this sanity check is used by consensus-critical
 * validation code, the exact value of the MAX_MONEY constant is consensus
 * critical; in unusual circumstances like an(other) overflow bug that allowed
 * for the creation of coins out of thin air modification could lead to a fork.
 * */
static const CAmount MAX_MONEY = 8589934592 * COIN; // Dedcoin: maximum of 44B coins (given some randomness), max transaction 8,589,934,592
inline bool MoneyRange(const CAmount& nValue) { return (nValue >= 0 && nValue <= MAX_MONEY); }

/**
 * Fee rate in farthings per kilobyte: CAmount / kB
 */
class CFeeRate
{
private:
    CAmount nFarthingsPerK; // unit is farthings-per-1,000-bytes
public:
    /** Fee rate of 0 farthings per kB */
    CFeeRate() : nFarthingsPerK(0) { }
    explicit CFeeRate(const CAmount& _nFarthingsPerK): nFarthingsPerK(_nFarthingsPerK) { }
    /** Constructor for a fee rate in farthings per kB. The size in bytes must not exceed (2^63 - 1)*/
    CFeeRate(const CAmount& nFeePaid, size_t nBytes);
    /**
     * Return the wallet fee in koinus for the given size in bytes.
     */
    CAmount GetFee(size_t nBytes) const;
    /**
     * Return the relay fee in koinus for the given size in bytes.
     */
    CAmount GetRelayFee(size_t nBytes) const;
    /**
     * Return the fee in farthings for a size of 1000 bytes
     */
    CAmount GetFeePerK() const { return GetFee(1000); }
    friend bool operator<(const CFeeRate& a, const CFeeRate& b) { return a.nFarthingsPerK < b.nFarthingsPerK; }
    friend bool operator>(const CFeeRate& a, const CFeeRate& b) { return a.nFarthingsPerK > b.nFarthingsPerK; }
    friend bool operator==(const CFeeRate& a, const CFeeRate& b) { return a.nFarthingsPerK == b.nFarthingsPerK; }
    friend bool operator<=(const CFeeRate& a, const CFeeRate& b) { return a.nFarthingsPerK <= b.nFarthingsPerK; }
    friend bool operator>=(const CFeeRate& a, const CFeeRate& b) { return a.nFarthingsPerK >= b.nFarthingsPerK; }
    CFeeRate& operator+=(const CFeeRate& a) { nFarthingsPerK += a.nFarthingsPerK; return *this; }
    std::string ToString() const;

    ADD_SERIALIZE_METHODS;

    template <typename Stream, typename Operation>
    inline void SerializationOp(Stream& s, Operation ser_action) {
        READWRITE(nFarthingsPerK);
    }
};

#endif //  BITCOIN_AMOUNT_H
