static const char norm_fg[] = "#c6c7c9";
static const char norm_bg[] = "#0c0e12";
static const char norm_border[] = "#8a8b8c";

static const char sel_fg[] = "#c6c7c9";
static const char sel_bg[] = "#4D739B";
static const char sel_border[] = "#c6c7c9";

static const char urg_fg[] = "#c6c7c9";
static const char urg_bg[] = "#3D6391";
static const char urg_border[] = "#3D6391";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
