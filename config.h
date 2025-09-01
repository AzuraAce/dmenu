/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;    /* -c option; centers dmenu on screen */
static int min_width = 1000; /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = { 
  "SF Mono:size=11:antialias=true:autohint=true",
  "HackNerdFontMono-Regular:size=14:antialias=true:autohint=true",
  "DejaVuSans:size=12:antialias=true:autohint=true",
}; /* CozetteVector (old-school font) */

static const char *prompt    = NULL; /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
  /*     fg         bg       */
  [SchemeNorm] = { "#bbbbbb", "#222222" },
  [SchemeSel] = { "#eeeeee", "#6E56AF" },
  [SchemeSelHighlight] = { "#DDDFFF", "#005577" },
  [SchemeNormHighlight] = { "#54487A", "#222222" },
  [SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines
 */
static unsigned int lines = 0; // 10;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
