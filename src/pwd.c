//
// pwd - prints (p)resent (w)orking (d)irectory
//
// Copyright 2015 zach wick <zach@zachwick.com>
// Licensed under the GNU GPLv3 or later
//

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define VERSION "0.0.1"
#define AUTHOR "zach wick <zach@zachwick.com>"

int
main(int argc, char *argv[]) {
	// Call getcwd from the GNU standard library which does exactly what we want
	char *dirname = getcwd(NULL, 0);

	// Print out the directory's name
	puts(dirname);

	// Clean up the memory allocated from calling getcwd
	free(dirname);
}
