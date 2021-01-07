#include "Smart_Window.h"
#include <iostream>
#include "AC.h"
#include <cstdlib>
#include <unistd.h>
#include "AC.cpp"

using namespace std;

Smart_Window::Smart_Window()
{

}

Smart_Window::~Smart_Window()
{

}

void Smart_Window::Open()
{
    status=1;

}

void Smart_Window::Close()
{
    status=0;

}

int Smart_Window::Send_status()
{
    return status;
}

//Function that checks the weather and accordingly, controls the AC and Smart Window
void Smart_Window::Weather_check(int sc,int p,int wind)
{
    AC ac;

    if((sc>=1/8 && sc<=3/8) && wind<=20 && p<=20 )  // Conditions for MODERATE WEATHER
    {
        Open();
        ac.status=0;

        cout <<"The weather is great outside. The windows are opened and the AC turned off!"<< endl;
    }
    else if((sc>=5/8 && sc<=8/8) && wind>=20 && p>=40)  // Conditions for EXTREME WEATHER
    {
        Close();
        if(ac.temperature>25)
        {
            ac.status=1;
            cout <<"The weather is extreme outside. The windows are closed and the AC turned on!"<< endl;
        }
    }
      cout <<"The weather is extreme outside. The windows are closed. "<< endl;
    Sleep(3000);

    Weather_check(2/8,10,19);
}

