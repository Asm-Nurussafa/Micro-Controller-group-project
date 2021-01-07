
#include "Lightingsystem.h"
#include "bulb.cpp"
#include "Motionsensor.cpp"
#include "Lightsensor.cpp"


using namespace std;

LightingSystem::LightingSystem()
{
    counter = 0;

}

LightingSystem::~LightingSystem()
{
}

int LightingSystem::no_of_bulbs(){
    int no_lights;
    cout<<"How many lights:";
    cin>>no_lights;
    no_of_light_checker(no_lights);
    return no_lights;


}

void LightingSystem::no_of_light_checker(int no){
    if(no>=10){
        cout<<"Too many ligts"<<endl;
        exit(0);
    }
    else return;

}


void LightingSystem::addbulb()
{
Bulb bulbs[10];


    if (counter<10)
    {
        status[counter]=bulbs[counter].add_Bulb(counter);


        counter++;


    }

}

void LightingSystem::changebulbbrightness(){
Bulb bulbs[10];
     char x;
     int bulb,brightness;
    cout<<endl<<"Do you want to change brightness: ";
    cin>>x;
    if(x=='N'||x=='n')
        return;
    else if (x=='Y'||x=='y')

    {
        cout<<endl<<"Enter Bulb no: ";
        cin>>bulb;
        cout<<"Enter new Brightness: ";
        cin>>brightness;
        status[bulb-1]=bulbs[bulb].changeBrigtness(brightness);
        cout<<"Brightness of "<<bulb<<"  Changed to "<<brightness<<" "<<endl;
    }

    else
    {
        cout<<"Enter Y on N"<<endl;
        changebulbbrightness();
    }


}

void LightingSystem::motion_starter(){

    Motionsensor mtn;
    mtn.check_status();



}

void LightingSystem::write_status(){
    LightSensor lsn;

    lsn.get_status(counter,status);


}

