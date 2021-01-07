
#include "bulb.h"
#include <iostream>
using namespace std;


Bulb::Bulb()
{
    status = 0;
}

Bulb::~Bulb()
{
}

int Bulb::changeBrigtness( int brightness)
{
    status = brightness;
    return status;

}

int Bulb::add_Bulb(int counter)
{
    int statusAtempt;
    cout  << "Enter the brightness of light "<<counter+1<<"  :";

    cin >> statusAtempt;
    if(statusAtempt > 0  && statusAtempt < 4)
    {
        status = statusAtempt;
        cout<<"Brightness of light no. "<<counter+1<<" set to "<<status<<endl;
    }
    else
    {
        status=0;
        cout<<"Brightness out of bounds. Not set"<<endl;
    }

    return status;


}
