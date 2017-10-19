
#ifndef _COLORS_
#define _COLORS_
// reset
#define RST         "\033[0m"

// colors
#define RED         "\033[31m"
#define GRN         "\033[32m"
#define YEL         "\033[33m"
#define BLU         "\033[34m"
#define MAG         "\033[35m"
#define CYN         "\033[36m"
#define WHT         "\033[37m"

// background colors
#define BG_RED      "\033[41m"
#define BG_GRN      "\033[42m"
#define BG_YEL      "\033[43m"
#define BG_BLU      "\033[44m"
#define BG_MAG      "\033[45m"
#define BG_CYN      "\033[46m"
#define BG_WHT      "\033[47m"

// background colors and reset
#define FBG_RED(x)  BG_RED x RST
#define FBG_GRN(x)  BG_GRN x RST
#define FBG_YEL(x)  BG_YEL x RST
#define FBG_BLU(x)  BG_BLU x RST
#define FBG_MAG(x)  BG_MAG x RST
#define FBG_CYN(x)  BG_CYN x RST
#define FBG_WHT(x)  BG_WHT x RST

// colors and reset
#define FRED(x)     RED x RST
#define FGRN(x)     GRN x RST
#define FYEL(x)     YEL x RST
#define FBLU(x)     BLU x RST
#define FMAG(x)     MAG x RST
#define FCYN(x)     CYN x RST
#define FWHT(x)     WHT x RST

// other flags
#define DEFT(x)  "\033[0m" x RST
#define BOLD(x)  "\033[1m" x RST
#define SLIT(x)  "\x33[1m" x RST
#define ITLA(x)  "\033[3m" x RST
#define UNDL(x)  "\033[4m" x RST

#endif  /* _COLORS_ */