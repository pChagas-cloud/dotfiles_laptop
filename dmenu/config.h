/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */
static const unsigned int border_width = 2;
static unsigned int columns = 3;
static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"terminus:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static const char *colors[SchemeLast][2] = {
	        /*     fg         bg       */
	        [SchemeNorm] = { "#eaeaea", "#010101" },
		[SchemeSel] = { "#eaeaea", "#363636" },
		[SchemeOut] = { "#eaeaea", "#D1D1D1" },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
