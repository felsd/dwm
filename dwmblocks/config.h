//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/       /*Update Interval*/	/*Update Signal*/
	{"",	    "dwm_nextcloud",  0,                    9},
	{"",	    "dwm_wifi",	      10,                   1},
	{"",	    "dwm_ram",        10,                   2},
	{"",	    "dwm_battery",    15,                   5},
	{"",	    "dwm_audio",      0,                    3},
	// {"",	    "dwm_brightness", 15,                   4},
	{"",	    "dwm_bitcoin",   900,                   8},
	{"",	    "dwm_date",       10,                   6},
	{"",	    "dwm_time",       0,                    7},
	// {"",	    "dwm_skype",      60,                   8},
	// {"",	    "dwm_slack",      60,                   10},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '\0';

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
