
Debian
====================
This directory contains files used to package blackhatd/blackhat-qt
for Debian-based Linux systems. If you compile blackhatd/blackhat-qt yourself, there are some useful files here.

## blackhat: URI support ##


blackhat-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install blackhat-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your blackhat-qt binary to `/usr/bin`
and the `../../share/pixmaps/blackhat128.png` to `/usr/share/pixmaps`

blackhat-qt.protocol (KDE)

