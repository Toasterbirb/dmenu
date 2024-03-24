/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"mononoki:size=17"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char passwdchar   = '*';
static int centered_menu = 0;    /* Floating centered menu at the top. Only works with xinerama enabled
                                    this will also override the position setting args */
static int height_offset = 64;   /* Offset from the top (or bottom) of the screen when using centered menu */

static const char *colors[SchemeLast][2] = {
	/*                    fg         bg       */
	[SchemeNorm]      = { "#cddbf9", "#2c2e3e" },
	[SchemeSel]       = { "#2c2e3e", "#b1dba4" },
	[SchemeOut]       = { "#000000", "#00ffff" },
	[SchemeHp]        = { "#223249", "#333333" },
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 0;
static unsigned int columns    = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 2;
