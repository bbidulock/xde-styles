
## xde-styles

Package xde-styles-1.1.85 was released under GPL license 2016-01-29.

This is a set of styles for the XDE (X Desktop Environment) which
provides a small and consistent set of window manager styles across a
wide range of light-weight window managers.  The purpose is to provide a
consistent visual appearance for the X Desktop Environment across all
supported window managers.



### Release

This is the `xde-styles-1.1.85` package, released 2016-01-29.  This release,
and the latest version, can be obtained from the GitHub repository at
https://github.com/bbidulock/xde-styles, using a command such as:

```bash
git clone https://github.com/bbidulock/xde-styles.git
```

Please see the [NEWS](NEWS) file for release notes and history of user visible
changes for the current version, and the [ChangeLog](ChangeLog) file for a more
detailed history of implementation changes.  The [TODO](TODO) file lists
features not yet implemented and other outstanding items.

Please see the [INSTALL](INSTALL) file for installation instructions.

When working from `git(1)', please see the [README-git](README-git) file.  An
abbreviated installation procedure that works for most applications
appears below.

This release is published under the GPL license that can be found in
the file [COPYING](COPYING).

### Quick Start:

The quickest and easiest way to get xde-styles up and running is to run
the following commands:

```bash
git clone https://github.com/bbidulock/xde-styles.git xde-styles
cd xde-styles
./autogen.sh
./configure --prefix=/usr
make V=0
make DESTDIR="$pkgdir" install
```

This will configure, compile and install xde-styles the quickest.  For
those who would like to spend the extra 15 seconds reading `./configure
--help`, some compile time options can be turned on and off before the
build.

For general information on GNU's `./configure`, see the file [INSTALL](INSTALL).

### Running xde-styles

Read the manual pages after installation:

    man xde-styles

### Issues

Report issues to https://github.com/bbidulock/xde-styles/issues.

