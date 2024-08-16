<h1 align="center">
<img src="https://static.tumblr.com/ppdj5y9/Ae9mxmxtp/300coin.png" alt="dedcoin" width="300"/>
<br/><br/>
dedcoin Core [DEDC, Ð]  
</h1>

<div align="center">

[![dedcoinBadge](https://img.shields.io/badge/DEDC-Coin-yellow.svg)](https://dedcoin.com)
[![MuchWow](https://img.shields.io/badge/Much-Wow-yellow.svg)](https://dedcoin.com)

</div>

**IMPORTANT: Starting August 2024, the `master` branch has become the primary
integration branch and has become unstable. Please check out a tagged version
before compiling production binaries.**

For internationalized documentation, see the index at [doc/intl](doc/intl/README.md).

Dedcoin is a community-driven cryptocurrency that was copied from Dogecoin. The Dedcoin Core software allows anyone to operate a node in the Dedcoin blockchain networks and uses the Scrypt hashing method for Proof of Work. It is adapted from Dogecoin Core and other cryptocurrencies.

For information about the default fees used on the Dedcoin network, please
refer to the [fee recommendation](doc/fee-recommendation.md).

**Website:** [dedcoin.com](https://dedcoin.com)

## Usage 💻

To start your journey with dedcoin Core, see the [installation guide](INSTALL.md) and the [getting started](doc/getting-started.md) tutorial.

The JSON-RPC API provided by dedcoin Core is self-documenting and can be browsed with `dedcoin-cli help`, while detailed information for each command can be viewed with `dedcoin-cli help <command>`. Alternatively, see the [Bitcoin Core documentation](https://developer.bitcoin.org/reference/rpc/) - which implement a similar protocol - to get a browsable version.

### Such ports

dedcoin Core by default uses port `22556` for peer-to-peer communication that
is needed to synchronize the "mainnet" blockchain and stay informed of new
transactions and blocks. Additionally, a JSONRPC port can be opened, which
defaults to port `22555` for mainnet nodes. It is strongly recommended to not
expose RPC ports to the public internet.

| Function | mainnet | testnet | regtest |
| :------- | ------: | ------: | ------: |
| P2P      |   22556 |   44556 |   18444 |
| RPC      |   22555 |   44555 |   18332 |

## Ongoing development - Moon plan 🌒

dedcoin Core is an open source and community driven software. The development
process is open and publicly visible; anyone can see, discuss and work on the
software.

Main development resources:

* [GitHub Projects](https://github.com/dedcoin/dedcoin/projects) is used to
  follow planned and in-progress work for upcoming releases.
* [GitHub Discussion](https://github.com/dedcoin/dedcoin/discussions) is used
  to discuss features, planned and unplanned, related to both the development of
  the dedcoin Core software, the underlying protocols and the DEDC asset.  
* [dedcoindev subreddit](https://www.reddit.com/r/dedcoindev/)

### Version strategy
Version numbers are following ```major.minor.patch``` semantics.

### Branches
There are 4 types of branches in this repository:

- **master:** Unstable, contains the latest code under development.
- **maintenance:** Stable, contains the latest version of previous releases,
  which are still under active maintenance. Format: ```<version>-maint```
- **development:** Unstable, contains new code for upcoming releases. Format: ```<version>-dev```
- **archive:** Stable, immutable branches for old versions that no longer change
  because they are no longer maintained.

***Submit your pull requests against `master`***

*Maintenance branches are exclusively mutable by release. When a release is*
*planned, a development branch will be created and commits from master will*
*be cherry-picked into these by maintainers.*

## Contributing 🤝

If you find a bug or experience issues with this software, please report it
using the [issue system](https://github.com/dedcoin/dedcoin/issues/new?assignees=&labels=bug&template=bug_report.md&title=%5Bbug%5D+).

Please see [the contribution guide](CONTRIBUTING.md) to see how you can
participate in the development of dedcoin Core. There are often
[topics seeking help](https://github.com/dedcoin/dedcoin/labels/help%20wanted)
where your contributions will have high impact and get very appreciation. wow.

## Communities 🚀🍾

You can join the communities on different social media.
To see what's going on, meet people & discuss, find the latest meme, learn
about dedcoin, give or ask for help, to share your project.

Here are some places to visit:

* [dedcoin subreddit](https://www.reddit.com/r/dedcoin/)
* [Dedducation subreddit](https://www.reddit.com/r/dedducation/)
* [Discord](https://discord.gg/dedcoin)
* [dedcoin Twitter](https://twitter.com/dedcoin)

## Very Much Frequently Asked Questions ❓

Do you have a question regarding dedcoin? An answer is perhaps already in the
[FAQ](doc/FAQ.md) or the
[Q&A section](https://github.com/dedcoin/dedcoin/discussions/categories/q-a)
of the discussion board!

## License - Much license ⚖️
dedcoin Core is released under the terms of the MIT license. See
[COPYING](COPYING) for more information or see
[opensource.org](https://opensource.org/licenses/MIT)
