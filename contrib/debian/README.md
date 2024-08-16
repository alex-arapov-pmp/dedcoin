
Debian
====================
This directory contains files used to package dedcoind/dedcoin-qt
for Debian-based Linux systems. If you compile dedcoind/dedcoin-qt yourself, there are some useful files here.

## dedcoin: URI support ##


dedcoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install dedcoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your dedcoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/dedcoin128.png` to `/usr/share/pixmaps`

dedcoin-qt.protocol (KDE)

