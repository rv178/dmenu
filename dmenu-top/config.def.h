/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static const unsigned int alpha = 0xf0;
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"JetbrainsMono:size=11"
};

static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */

static const char *prompt      = "Search: ";      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#D8DEE9", "#2E3440" },
	[SchemeSel] = { "#D8DEE9", "#5E81AC" },
	[SchemeOut] = { "#D8DEE9", "#2E3440" },
	[SchemeSelHighlight] = { "#4C566A", "#5E81AC" },
	[SchemeNormHighlight] = { "#88C0D0", "#2E3440" },
	[SchemeHp] = { "#D8DEE9", "#88C0D0" }
};

static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel] = { OPAQUE, alpha },
	[SchemeOut] = { OPAQUE, alpha },
};

/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 5;
static unsigned int columns    = 1;

/* -h option; minimum height of a menu line */
static unsigned int lineheight = 35;
static unsigned int min_lineheight = 35;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 0;
