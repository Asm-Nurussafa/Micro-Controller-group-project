
#include "Motionsensor.h"
using namespace std;
#include<bits/stdc++.h>

Motionsensor::Motionsensor()
{
}

Motionsensor::~Motionsensor()
{
}
bool Motionsensor::change_status()
{

}
void Motionsensor::check_status()
{
    char x;
    cout<<"Do you want to check Motion Detection: ";
    cin>>x;
    if(x=='N'||x=='n')
        exit(0);
    else if (x=='Y'||x=='y')
        return;
    else
    {
        cout<<"Enter Y on N"<<endl;
        check_status();
    }

}
