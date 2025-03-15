//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"  ", 		"top -bn1 | grep load | awk '/^top/ {print $11}' | sed s/,/%/",		3,			18},
	{" ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
	{"󰖂 ", 		"nordlayer status --silent | grep VPN | sed s/'VPN: '//",		5,			15},
	{" ", 		"network.sh",		5,			16},
	{"", 		"brightness.sh",		0,			14},
	{"", 		"volume.sh",		0,			10},
	{"", 		"battery.sh",		5,			3},
	{"", "date '+%b %d (%a) %I:%M%p '",					1,		0},
};

// Define StatusCMD
// static char *getcmds[] = {
// 	"volume.sh",       // Click action for Volume
// 	"brightness.sh",   // Click action for Brightness
// };
// static int getsigcmds = LENGTH(getcmds);

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;


