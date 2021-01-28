
#pragma once
#include "Lightsensor.h"
#include "bulb.h"
//#include "bulb.cpp"
#define lightsoff 0
#define  lightson 1
#define  dimmerlights 2


class LightingSystem
{
private:
    LightSensor sensors[10];
     int bulbs[10]={0};
    int counter;
    int brigtness[10]={0};
    int status[10]={0};

public:
    //Bulb bulbs[10];
    LightingSystem(/* args */);
    ~LightingSystem();
    int no_of_light_checker(int x);
    void motion_starter();
    void checkBrightness();
    void readstatus(int bulbNumber);
    int * addbulb(int counter);
    void changebulbbrightness(int num);
    void write_status();
    int no_of_bulbs();

};
