/*****************************************************************************

 Copyright (c) 2008-2014  Monavacon Limited <http://www.monavacon.com/>
 Copyright (c) 2001-2008  OpenSS7 Corporation <http://www.openss7.com/>
 Copyright (c) 1997-2001  Brian F. G. Bidulock <bidulock@openss7.org>

 All Rights Reserved.

 This program is free software: you can redistribute it and/or modify it under
 the terms of the GNU General Public License as published by the Free Software
 Foundation, version 3 of the license.

 This program is distributed in the hope that it will be useful, but WITHOUT
 ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 details.

 You should have received a copy of the GNU General Public License along with
 this program.  If not, see <http://www.gnu.org/licenses/>, or write to the
 Free Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

 -----------------------------------------------------------------------------

 U.S. GOVERNMENT RESTRICTED RIGHTS.  If you are licensing this Software on
 behalf of the U.S. Government ("Government"), the following provisions apply
 to you.  If the Software is supplied by the Department of Defense ("DoD"), it
 is classified as "Commercial Computer Software" under paragraph 252.227-7014
 of the DoD Supplement to the Federal Acquisition Regulations ("DFARS") (or any
 successor regulations) and the Government is acquiring only the license rights
 granted herein (the license rights customarily provided to non-Government
 users).  If the Software is supplied to any unit or agency of the Government
 other than DoD, it is classified as "Restricted Computer Software" and the
 Government's rights in the Software are defined in paragraph 52.227-19 of the
 Federal Acquisition Regulations ("FAR") (or any successor regulations) or, in
 the cases of NASA, in paragraph 18.52.227-86 of the NASA Supplement to the FAR
 (or any successor regulations).

 -----------------------------------------------------------------------------

 Commercial licensing and support of this software is available from OpenSS7
 Corporation at a fee.  See http://www.openss7.com/

 *****************************************************************************/

#include "xde.h"

/** @name WAIMEA
  */
/** @{ */

/** @brief Get the .waimearc file.
  *
  * Note that the style file can be overidden with the --stylefile=%s option and
  * the action file can be overidden with the --actionfile=%s options.  DO NOT
  * USE THE --stylefile=%s option!
  */
static void
get_rcfile_WAIMEA()
{
	return xde_get_rcfile_simple("waimea", ".waimearc", "--rcfile");
}

/** @brief Find style in waimea style directory.
  *
  * Unlike most other window managers, style files for waimea are named
  * %s.style, where %s is the style name and no subdirectories will do.
  */
static char *
find_style_WAIMEA()
{
	return xde_find_style_simple("styles", "/stylerc", ".style");
}

/** @brief Get the waimea style.
  *
  * When waimea changes the style, like fluxbox and blackbox, it writes the path
  * to the new style in the session.styleFile resource in the ~/.waimearc file
  * and then reloads the configuration.
  *
  * The session.styleFile entry looks like:
  *
  *   session.styleFile:  /usr/share/waimea/styles/Default.style
  *
  */
static char *
get_style_WAIMEA()
{
	char name[64];
	char clas[64];

	snprintf(name, sizeof(name), "screen%d.styleFile", screen);
	snprintf(clas, sizeof(clas), "Screen%d.StyleFile", screen);
	return xde_get_style_database(name, clas);
}

/** @brief Reload waimea style.
  *
  * SIGHUP to the process will restart waimea.  SIGINT or SIGTERM will exit
  * gracefully with a zero exit status.
  */
static void
reload_style_WAIMEA()
{
	if (wm->pid)
		kill(wm->pid, SIGHUP);
	else
		EPRINTF("cannot restart %s without a pid", wm->name);
}

/** @brief Set the waimea style.
  *
  * When waimea changes the style, like fluxbox and blackbox, it writes the path
  * to the new style in the session.styleFile resource in the ~/.waimearc file
  * and then reloads the configuration.
  *
  * The session.styleFile entry looks like:
  *
  *   session.styleFile:  /usr/share/waimea/styles/Default.style
  *
  */
static void
set_style_WAIMEA()
{
	char name[64];

	snprintf(name, sizeof(name), "screen%d.styleFile", screen);
	return xde_set_style_database(name);
}

/** @brief List styles in waimea style directory.
  *
  * Unlike most other window managers, style files for waimea are named
  * %s.style, where %s is the style name and no subdirectories will do.
  */
static void
list_dir_WAIMEA(char *xdir, char *style)
{
	return xde_list_dir_simple(xdir, "styles", "/stylerc", ".style", style);
}

static void
list_styles_WAIMEA()
{
	return xde_list_styles_simple();
}

WmOperations xde_wm_ops = {
	"waimea",
	&get_rcfile_WAIMEA,
	&find_style_WAIMEA,
	&get_style_WAIMEA,
	&set_style_WAIMEA,
	&reload_style_WAIMEA,
	&list_dir_WAIMEA,
	&list_styles_WAIMEA
};

/** @} */

// vim: set sw=8 tw=80 com=srO\:/**,mb\:*,ex\:*/,srO\:/*,mb\:*,ex\:*/,b\:TRANS foldmarker=@{,@} foldmethod=marker:
