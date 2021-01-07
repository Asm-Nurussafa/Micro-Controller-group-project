
#pragma once
#include "Lightsensor.h"
#include "bulb.h"
//#include "bulb.cpp"


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
    void no_of_light_checker(int x);
    void motion_starter();
    void checkBrightness();
    void readstatus(int bulbNumber);
    void addbulb();
    void changebulbbrightness();
    void write_status();
    int no_of_bulbs();

};
