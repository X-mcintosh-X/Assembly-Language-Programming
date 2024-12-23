#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <strings.h>
#include <stdio.h>
#include "../util/util.h"

#define VEHICLE_COUNT  24

typedef struct vehicle vehicle_t;

struct vehicle {
  char    make [ 16 ];
  char    model [ 16 ];
  int     year;
};

void print_list (list_t *, char const *);

#endif

