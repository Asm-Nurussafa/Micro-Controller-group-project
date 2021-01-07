
#include "lightsensor.h"
using namespace std;

LightSensor::LightSensor()
{
}

LightSensor::~LightSensor()
{
}
void LightSensor::get_status(int counter,int status[])
{
    for(int i=0; i<counter; i++)
    {
        cout<<"Bulb "<<i+1<<"  :"<<status[i]<<endl;
    }

}
