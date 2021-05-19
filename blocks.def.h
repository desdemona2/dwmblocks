//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/				/*Update Interval*/	/*Update Signal*/
//	{"",       	"~/scripts/status/speed.sh",				1,			0},

	{"", 		"~/scripts/status/dwm_resources.sh",		5,			0},

	{"",		"~/scripts/status/dwm_alsa.sh",				0,			12},

	{"",		"~/scripts/status/dwm_date.sh",				1,			0},

	{"",		"~/scripts/status/dwm_battery.sh",			1000,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
