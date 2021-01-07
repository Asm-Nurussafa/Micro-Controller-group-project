
#include "Smarthub.h"


using namespace std;


Smarthub::Smarthub()
{
}

Smarthub::~Smarthub()
{
}

bool Smarthub::reboot(){

    cout<<"Do you want to reboot. Press Y to reboot: ";
    char x;
    cin>>x;
    if(x=='Y'||x=='y'){
        return true;
    }else exit(0);


}
