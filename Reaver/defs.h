#ifndef DEFS_H
#define DEFS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <WINDOWS.H>
#include <string>
#include <time.h>
#include <pcap.h>

#include "wps.h"

#define NULL_MAC  "\x00\x00\x00\x00\x00\x00"
#define DEFAULT_MAX_NUM_PROBES 15
#define MAX_ASSOC_FAILURES 10

#define TIMESTAMP_LEN 8
#define MAC_ADDR_LEN 6
#define SSID_TAG_NUMBER 0
#define RATES_TAG_NUMBER 1
#define CHANNEL_TAG_NUMBER 0xDD
#endif