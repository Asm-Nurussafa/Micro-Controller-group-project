#include "User.cpp"
#include "Lightingsystem.cpp"
#include "Smarthub.cpp"
#include "main.h"
//#include "Lightsensor.cpp"
//#include "Motionsensor.cpp"

using namespace std;


int main()
{

    User login;
    LightingSystem MySystem;
    Smarthub hub;


    login.log_in();


    MySystem.motion_starter();

    int no_lights=MySystem.no_of_bulbs();


    for(int i=0; i<no_lights; i++)
        MySystem.addbulb();

    MySystem.changebulbbrightness();

    MySystem.write_status();
    bool check= hub.reboot();
    if(check) main();

}



