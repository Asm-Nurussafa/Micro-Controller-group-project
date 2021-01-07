#include "User.h"
#include<bits/stdc++.h>

using namespace std;


User::User()
{
}

User::~User()
{
}

void User::log_in()
{


cout<<"";
    int loginAttempt = 0;

    while (loginAttempt < 3)
    {
        cout << "Please enter your user name: ";
        getline(cin,userid);
        cout <<endl<< "Please enter your user password: ";
        getline(cin,password);
       // string og="tasawar";

        if (!userid.compare("tasawar") && !password.compare("1234"))

        {

            cout << "Welcome\n";
             cout << "Thank you for logging in.\n";
            break;
        }
        else if (!userid.compare("guest") && !password.compare( "1234"))
        {

            cout << "Welcome \n";
             cout << "Thank you for logging in.\n";
            break;
        }
        else
        {
            cout << "Invalid login attempt. Please try again.\n" << '\n';
            loginAttempt++;
        }
    }
    if (loginAttempt == 3)
    {
        cout << "Too many login attempts! The program will now terminate.";
        exit(0);
    }


    return;
}







