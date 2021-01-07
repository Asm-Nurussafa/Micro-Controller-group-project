//SmartHub is connected to many SmartWindows, 5 AC's, multiple users possible
#include <iostream>
#include "AC.h"
#include "Smart_Window.h"
#include <cstdlib>
#include <unistd.h>
#else

using namespace std;



int main()
{
    Smart_Window sw;

    cout<<"Select your preference: \n 1. Press 1 to change AC's fan speed.\n 2. Press 2 AC's to change temperature." <<endl;
    cout<<"3. Press 0 to skip."<<endl;

    int input;

    cin>>input;

    switch(input)
    {
        case 1: // To change the AC's fan speed
            cout<<"Select your preference \n 1. Press one to increase fan speed.\n 2. Press two to decrease fan speed."<<endl;

            int input2;
            cin>>input2;

            if(input2==1)
            {
                sw.ac.Changefanspeed(5,'+');
            }


            else
            {
                sw.ac.Changefanspeed(5,'-');
            }

            break;

        case 2: // To change the AC's temperature
            cout<<"Select your preference: \n 1. Press one to increase AC Temperature\n 2. Press two to decrease AC Temperature"<<endl;

            int input3;
            cin>>input3;

            if(input3==1)
            {
                sw.ac.TemperatureSetting('+');
            }

            else
            {
                sw.ac.TemperatureSetting('-');
            }

            break;
        case 0:

            cout<< " Everything seems great!" << endl;
    }

    sw.Weather_check(2/8,10,19);

    return 0;
}



