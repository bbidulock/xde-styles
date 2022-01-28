---
layout: default
---
[xde-styles -- read me first file.  2020-06-12]: #

xde-styles
===============

Package `xde-styles-1.7` was released under GPLv3 license
2020-06-12.

This is a set of styles for the XDE (_X Desktop Environment_) which
provides a small and consistent set of window manager styles across a
wide range of light-weight window managers.  The purpose is to provide a
consistent visual appearance for the _X Desktop Environment_ across all
supported window managers.


Release
-------

This is the `xde-styles-1.7` package, released 2020-06-12.
This release, and the latest version, can be obtained from [GitHub][1],
using a command such as:

    $> git clone https://github.com/bbidulock/xde-styles.git

Please see the [RELEASE][3] and [NEWS][4] files for release notes and
history of user visible changes for the current version, and the
[ChangeLog][5] file for a more detailed history of implementation
changes.  The [TODO][6] file lists features not yet implemented and
other outstanding items.

Please see the [INSTALL][8] file for installation instructions.

When working from `git(1)`, please use this file.  An abbreviated
installation procedure that works for most applications appears below.

This release is published under GPLv3.  Please see the license in the
file [COPYING][10].


Quick Start
-----------

The quickest and easiest way to get `xde-styles` up and
running is to run the following commands:

    $> git clone https://github.com/bbidulock/xde-styles.git
    $> cd xde-styles
    $> ./autogen.sh
    $> ./configure
    $> make
    $> make DESTDIR="$pkgdir" install

This will configure, compile and install `xde-styles` the
quickest.  For those who like to spend the extra 15 seconds reading
`./configure --help`, some compile time options can be turned on and off
before the build.

For general information on GNU's `./configure`, see the file
[INSTALL][8].


Running
-------

Read the manual page after installation:

    $> man xde-styles


Issues
------

Report issues on GitHub [here][2].



[1]: https://github.com/bbidulock/xde-styles
[2]: https://github.com/bbidulock/xde-styles/issues
[3]: https://github.com/bbidulock/xde-styles/blob/1.7/RELEASE
[4]: https://github.com/bbidulock/xde-styles/blob/1.7/NEWS
[5]: https://github.com/bbidulock/xde-styles/blob/1.7/ChangeLog
[6]: https://github.com/bbidulock/xde-styles/blob/1.7/TODO
[7]: https://github.com/bbidulock/xde-styles/blob/1.7/COMPLIANCE
[8]: https://github.com/bbidulock/xde-styles/blob/1.7/INSTALL
[9]: https://github.com/bbidulock/xde-styles/blob/1.7/LICENSE
[10]: https://github.com/bbidulock/xde-styles/blob/1.7/COPYING

[ vim: set ft=markdown sw=4 tw=72 nocin nosi fo+=tcqlorn spell: ]: #
