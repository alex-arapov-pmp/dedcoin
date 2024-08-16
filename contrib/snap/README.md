# dedcoin Snap Packaging

Commands for building and uploading a dedcoin Core Snap to the Snap Store. Anyone on amd64 (x86_64), arm64 (aarch64), or i386 (i686) should be able to build it themselves with these instructions. This would pull the official dedcoin binaries from the releases page, verify them, and install them on a user's machine.

## Building Locally
```
sudo apt install snapd
sudo snap install --classic snapcraft
sudo snapcraft
```

### Installing Locally
```
snap install \*.snap --devmode
```

### To Upload to the Snap Store
```
snapcraft login
snapcraft register dedcoin-core
snapcraft upload \*.snap
sudo snap install dedcoin-core
```

### Usage
```
dedcoin-unofficial.cli # for dedcoin-cli
dedcoin-unofficial.d # for dedcoind
dedcoin-unofficial.qt # for dedcoin-qt
dedcoin-unofficial.test # for test_dedcoin
dedcoin-unofficial.tx # for dedcoin-tx
```

### Uninstalling
```
sudo snap remove dedcoin-unofficial
```