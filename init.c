#include "init.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

#define WORKING_DIR ".bill"

struct stat st = {0};

void init_working_dir() {
	if (stat(WORKING_DIR, &st) == -1) {
		mkdir(WORKING_DIR, 0754);
	}
}
