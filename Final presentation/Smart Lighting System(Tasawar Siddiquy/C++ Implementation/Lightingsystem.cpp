
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

int LightingSystem::no_of_bulbs()
{
    int no_lights;
    cout<<"How many lights:";
    cin>>no_lights;



    while(cin.fail())
    {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        cout << "Bad entry.  Enter a NUMBER: ";
        cin >> no_lights;
    }



    no_lights= no_of_light_checker(no_lights);

    return no_lights;


}

int LightingSystem::no_of_light_checker(int no)
{

    if(no>=10)
    {
        cout<<"Too many lights"<<endl;

        return 0;
    }
    else return no;

}


int * LightingSystem::addbulb(int x)
{
    Bulb bulbs[10];
    if(x==0)cout<<endl<<"NO lights initialized"<<endl;


    for(int i=0; i<x; i++)
        if (counter<10)
        {
            status[counter]=bulbs[counter].add_Bulb(counter);

            counter++;
        }

    return status;


}

void LightingSystem::changebulbbrightness(int num)
{
    if(num==0)
    {
        cout<<endl<<"No lights initialized"<<endl;
        return;
    }
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
        if(bulb>num)
        {
            cout<<endl<<"Bulb does not exist. Try again"<<endl;
            return;
        }
        while(cin.fail())
        {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            cout << "Bad entry.  Enter a NUMBER: ";
            cin >> bulb;
        }
        //cin>>bulb;
        cout<<"Enter new Brightness: ";
        cin>>brightness;
        while(cin.fail())
        {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            cout << "Bad entry.  Enter a NUMBER: ";
            cin >> brightness;
        }
        status[bulb-1]=bulbs[bulb].changeBrigtness(brightness);
        cout<<"Brightness of "<<bulb<<"  Changed to "<<brightness<<" "<<endl<<endl;
        int currentstate=lightsoff;


        if(brightness==3)
        {
            currentstate=lightson;
        }
        else if(brightness >0 && brightness<3)
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
            cout<<"lights on"<<endl<<endl;
            break;



        case dimmerlights:
            cout<<"dimmerlights on"<< endl<<endl;
            break;

        case lightsoff:
            cout<<"lights off"<< endl<<endl;
            break;
        }


    }


    else
    {
        cout<<"Enter Y or N"<<endl;
        changebulbbrightness(num);
    }


}

void LightingSystem::motion_starter()
{

    Motionsensor mtn;
    mtn.check_status();



}

void LightingSystem::write_status()
{
    LightSensor lsn;

    lsn.get_status(counter,status);


}

