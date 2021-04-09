#include "User.cpp"
#include "Lightingsystem.cpp"
#include "Smarthub.cpp"
#include "main.h"


using namespace std;


int main()
{
    LightingSystem MySystem;
    Smarthub hub;
    int no_lights;
    cout<<"Login"<< endl;

    User login;
    login.log_in();        // Log In





    char state;

    int currentstate=lightsoff;
    while(1)
    {
        output();
        cin>>state;

        switch(state)
        {

        case '1':
        {

            MySystem.motion_starter();
                                              // Motion Sensor
            break;

        }
        case '2':
        {
            no_lights=MySystem.no_of_bulbs(); // Add Bulb

            break;
        }
        case '3':
        {
            int *arr;
            arr= MySystem.addbulb(no_lights);

            for(int i=0; i<no_lights; i++)
            {

               cout<<endl;
                if(arr[i]==3)
                {
                    currentstate=lightson;
                }
                else if(arr[i]>0 && arr[i]<3)
                {
                    currentstate=dimmerlights;
                }
                else
                {
                    currentstate=lightsoff;
                }
                switch (currentstate)
                {
                case lightson:
                    cout<<"lights on"<<endl<<endl;     // lights on
                    break;



                case dimmerlights:
                    cout<<"dimmerlights on"<< endl<<endl; //dimmerlights
                    break;

                case lightsoff:
                    cout<<"lights off"<< endl<<endl;  // lightsoff
                    break;
                }

                // Enter Brightness
                //break;
            }
            break;
        }
        case '4':
        {

            MySystem.changebulbbrightness(no_lights);    // Change Brightness
            MySystem.write_status();
            break;
        }

        case '5':
        {


            bool check= hub.reboot();                  // Reboot
            if(check)
            {

                main();
            }
        }

        case '6':
        {
            exit(0);                                    // Exit
        }

        default:
            cout<< " Wrong input. Please follow the instructions." <<endl;  // Wrong input
            break;
        }
    }

}




