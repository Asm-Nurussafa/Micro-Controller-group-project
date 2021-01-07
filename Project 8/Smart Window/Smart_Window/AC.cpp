#include "AC.h"
#include <iostream>
#include <cstdlib>
#include <unistd.h>

using namespace std;

AC::AC()
{


}

AC::~AC()
{

}

//Function to control the AC's fan speed
void AC::Changefanspeed(int change_value, char opt)

{
    int fanspeed=15;
    if(opt=='+')
    {
        fanspeed+=change_value;
        cout << "Fan speed increased to " << fanspeed<<" ." << endl;
    }

    else
    {

        fanspeed-=change_value;
        cout << "Fan speed decreased to " << fanspeed<<" ." <<  endl;
    }

}

//Function to control the AC's temperature setting
void AC:: TemperatureSetting(char opt)

{
    int temperature=20;
    if(opt=='+')
    {
        temperature+=1;
        cout<<"Temperature increased to "<< temperature<< "." <<endl;

    }

    else

    {
        temperature-=1;
        cout<<"Temperature deacreased to "<< temperature<< "." <<endl;

    }

}

int AC:: Send_status()
{
    return status;
}
