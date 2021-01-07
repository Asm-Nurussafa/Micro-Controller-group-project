
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

//state definition
#define INITIAL  0
#define LIGHTS_ON_LOW  1
#define LIGHTS_ON_HIGH  2
#define STOP  3


int state=INITIAL;

void statechart();
