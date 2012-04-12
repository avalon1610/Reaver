#ifndef WPSCRACK_H
#define WPSCRACK_H

#include "defs.h"
#include "argsparser.h"
#include "sigint.h"
#include "cracker.h"

#define BELL "\x07"
#define BELl_COUNT 4

void parse_recurring_delay(char *argv);
int usage(char *prog_name);

#endif