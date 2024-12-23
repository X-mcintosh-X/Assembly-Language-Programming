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
} vehicle[VEHICLE_COUNT + 1] = {
  {"Ford", "Aspire", 1994},
  {"Chevrolet", "Silverado 1500", 2003},
  {"Buick", "Skylark", 1997},
  {"BMW", "Z4", 2012},
  {"BMW", "Z4", 2008},
  {"Oldsmobile", "Bravada", 2002},
  {"Pontiac", "Grand Prix", 1968},
  {"Subaru", "Legacy", 2007},
  {"GMC", "Yukon", 2006},
  {"Mitsubishi", "Truck", 1991},
  {"Hyundai", "Tiburon", 2001},
  {"Dodge", "Ram 3500", 2002},
  {"Alfa Romeo", "164", 1993},
  {"GMC", "Yukon XL 2500", 2005},
  {"Lexus", "LS", 1994},
  {"Audi", "Q7", 2007},
  {"Ford", "Explorer", 2007},
  {"Pontiac", "Grand Prix", 1987},
  {"Mercury", "Capri", 1993},
  {"Hyundai", "Equus", 2012},
  {"GMC", "Savana 2500", 2005},
  {"Lexus", "RX", 2010},
  {"Lexus", "SC", 2007},
  {"Volkswagen", "Cabriolet", 1999},
  {"Buick", "Lucerne", 2005}
};

void print_list (list_t *, char const *);

#endif

