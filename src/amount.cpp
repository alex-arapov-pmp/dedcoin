// Copyright (c) 2009-2010 Sa_toshikamoto
// Copyright (c) 2009-2016 The Bitcoin Core developers
// Copyright (c) 2021-2022 The Dogecoin Core developers
// Copyright (c) 2021-2022 The Dedcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "amount.h"

#include "tinyformat.h"

const std::string CURRENCY_UNIT = "DEDC";

CFeeRate::CFeeRate(const CAmount& nFeePaid, size_t nBytes_)
{
    assert(nBytes_ <= uint64_t(std::numeric_limits<int64_t>::max()));
    int64_t nSize = int64_t(nBytes_);

    if (nSize > 0)
        nFarthingsPerK = nFeePaid * 1000 / nSize;
    else
        nFarthingsPerK = 0;
}

CAmount CFeeRate::GetFee(size_t nBytes_) const
{
    assert(nBytes_ <= uint64_t(std::numeric_limits<int64_t>::max()));
    int64_t nSize = int64_t(nBytes_);

    CAmount nFee = nFarthingsPerK * nSize / 1000;

    if (nFee == 0 && nSize != 0) {
        if (nFarthingsPerK > 0)
            nFee = CAmount(1);
        if (nFarthingsPerK < 0)
            nFee = CAmount(-1);
    }

    return nFee;
}

std::string CFeeRate::ToString() const
{
    return strprintf("%d.%08d %s/kB", nFarthingsPerK / COIN, nFarthingsPerK % COIN, CURRENCY_UNIT);
}
