
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <iostream>
#include <cstdlib>
#include <string>
#include<bits/stdc++.h>

//Login details: username- nurussafa ; password= 4321

using namespace std;


class AC
{
public:
    int ac_status;              // On: ac_status=1 ; Off: ac_status=0

    int fanspeed=15,temperature=20;     //default settings for AC.

    void AC_turn_on()
    {
        ac_status=1;
        cout<<"\nAC turned on.\n"<<endl;
    }

    void AC_turn_off()
    {
        ac_status=0;
        cout<<"\nAC turned off.\n"<<endl;
    }

    void Changefanspeed(int change_value, char opt)     //function to change AC's fan speed

    {
        if(opt=='+')
            {fanspeed+=change_value;
            cout<<"\nFan speed increased. Fan speed is now: "<< fanspeed << ". \n"<<endl;}
        else if (opt=='-')
            {fanspeed-=change_value;
        cout<<"\nFan speed decreased. Fan speed is now: "<< fanspeed << ". \n"<<endl;}

    }

    void TemperatureSetting(char opt)               //function to change AC's temperature
    {
        if(opt=='+')

            {temperature+=1;
            cout<<"\nTemperature increased. AC temperature is now: "<< temperature << ". \n"<<endl;}
        else if (opt== '-')
            {temperature-=1;
        cout<<"\nTemperature changed. AC temperature is now: "<< temperature << ". \n"<<endl;}

    }

    int Send_status()
    {
        return ac_status;
    }
};

class Smart_Window
{
public:
    AC ac;

    int smartWindow_status; //1=open,0=close
    void Open()
    {
        smartWindow_status=1;
        cout<<"\nSmart window opened.\n"<<endl;
    }
    void Close()
    {
        smartWindow_status=0;
        cout<<"\nSmart window closed.\n"<<endl;
    }
    int Send_status()
    {
        return smartWindow_status;
    }


    enum current_weather{moderateWeather, extremeWeather, idle, exit};
    current_weather currentWeather;
    int Weather_check(float sc,float p,float wind)              //Function to check weather conditions.
    {

        if((sc>=0.125 && sc<=0.375) && (wind<=20) && (p<=20) )
        {
            currentWeather=moderateWeather;

        }
        else if((sc>=0.625 && sc<=1) && (wind>=20 && wind<=100) && (p>=40 && p<=100))
        {
            currentWeather=extremeWeather;

        }
        else if ((sc>=0.375 && sc <=0.625)&& (wind>=0 && wind<=100) && (p>=20 && p<=40) )
        {
            currentWeather=idle;
        }

        else if (sc==99&& (wind==99) && (p==99) )
        {
            currentWeather=exit;
        }
        return currentWeather;
    }
    void Moderate_weather()
    {
        cout<<" \nThe weather is moderate.\n "<<endl;
        Open();
        ac.AC_turn_off();
    }
    void Extreme_weather()
    {
        cout<<" \nThe weather is extreme.\n "<<endl;
        Close();
        cout<< "\n Do you want the AC turned on? Press Y to turn on, or press anything to terminate. "<<endl;
        char z;
        cin>> z;
        if(z=='Y'||z=='y')
        {
            ac.AC_turn_on();
        }else
        {
            ac.AC_turn_off();
        }
    }
    void Idle()
    {
        cout<<"\n The weather is normal. \n"<<endl;
        Close();
        ac.AC_turn_off();
    }



};
class Smarthub
{

private:
    int smarthub_status;

public:


    bool reboot()                   //function to reboot the device
    {

        cout<<"Do you want to reboot. Press Y to reboot: ";
        char x;
        cin>>x;

        if(x=='Y'||x=='y')
        {

            return true;

        }
        else return false;


    }
};
class User
{

private:
    string userid;
    string password;

public:

    void log_in()               //Login function for the user
    {


        cout<<"";
        int loginAttempt = 0;

        while (loginAttempt < 3)
        {


            cout << "Login: \n Please enter your user name: ";

            getline(cin,userid);
            cout <<endl<< "Please enter your user password: ";
            getline(cin,password);
            // string og="tasawar";

            if (!userid.compare("nurussafa") && !password.compare("4321"))

            {

                cout << "Welcome\n";
                cout << "Thank you for logging in.\n";
                break;
            }
            else if (!userid.compare("guest") && !password.compare( "1234"))
            {

                cout << "\n Welcome ! \n";
                cout << " Thank you for logging in.\n";
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
            cout << "Too many login attempts! The program will currentWeather terminate.";
            exit(0);
        }


        return;
    }

};



int main()
{


    Smart_Window sw;
    Smarthub hub;
    float skyConditions, precipitation, wind;








    User login;
    login.log_in();
    int choice;




    do{

    cout<< "\nSelect your preference \n 1. Press 1 to access AC settings.\n 2. Press 2 to access Smart Window settings.\n 3. Press 3 to shift to Auto Smart-Window settings. \n 4. Press 4 to reboot your device. \n 0. Press 0 to exit. \n" <<endl;


    cin>>choice;
    while(cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout << "Bad entry.  Enter only the number from the preference list: ";
        cin >> choice;
    }




        switch(choice)
        {

        case 1:
            int input;
            do{
            cout<<"\nSelect your preference \n 1. Press one to change fan speed\n 2. Press two to change temperature. \n 3. Press 3 to return to main menu. \n"<<endl;

            cin>>input;
            while(cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout << "Bad entry.  Enter only the number from the preference list: ";
                cin >> input;
            }

            switch(input)
            {
                case 1:
                int input2;

                do{
                cout<<"\nSelect your preference \n 1. Press one to increase fan speed\n 2. Press two to decrease fan speed. \n 3. Press 3 to return to go back to previous menu. \n"<<endl;

                cin>>input2;
                while(cin.fail())
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(),'\n');
                    cout << "Bad entry.  Enter only the number from the preference list: ";
                    cin >> input2;
                }

                switch (input2)
                {
                    case 1:
                    sw.ac.Changefanspeed(5,'+'); break;
                    case 2:
                    sw.ac.Changefanspeed(5,'-'); break;
                    case 3:
                    cout<<"\n Returning. \n"<<endl; break;

                    default: cout<< "\nWrong input. Try again." << endl; break;

                }

                } while (input2!=3); break;





            case 2:

                int input3;
                do{
                cout<<"\nSelect your preference \n 1. Press one to increase AC Temperature\n 2. Press two to decrease AC Temperature. \n 3. Press 3 to return to go back to previous menu. \n"<<endl;
                cin>>input3;
                while(cin.fail())
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(),'\n');
                    cout << "Bad entry.  Enter only the number from the preference list: ";
                    cin >> input3;
                }

                    switch (input3)
                    {

                    case 1:
                    sw.ac.TemperatureSetting('+'); break;
                    case 2:
                    sw.ac.TemperatureSetting('-'); break;
                    case 3:
                    cout<<"\n Returning. \n"<<endl; break;
                    default: cout<< "\nWrong input. Try again." << endl; break;
                    }
                } while (input3 !=3); break;





            case 3:
                cout<< "\n Returning. \n "<< endl; break;

            default:
            cout<< "\nWrong input! Please follow the instructions and try again.\n" << endl;
            break;

            }
        }while (input !=3); break;


        case 2:

            cout<<"\nSelect your preference. \n 1. Open the Smart Window. \n 2. Close the Smart Window. \n 3. Press 3 to return to main menu. \n"<<endl;
            int input4;
            cin>> input4;
            while(cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout << "Bad entry.  Enter only the number from the preference list: ";
                cin >> input4;
            }
            if(input4==1)
            {
                sw.Open();
            }
            else if(input4==2)
            {
                sw.Close();
            }
            else if (input4==3) {cout <<"\n Returning. \n"<< endl;}
            else {cout<< "Wrong input. Try again." << endl;}
            break;


        case 3:
            do{
            cout<< "\n(Press 99 in all cases to exit.) \nInputs for Sky conditions, wind and precipitation in order: " << endl;
            cin>> skyConditions >> wind >> precipitation;
            sw.Weather_check(skyConditions, wind, precipitation);
            while(cin.fail())
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(),'\n');
                    cout << "Bad entry.  Enter a floating number for the conditions. \n Please start over again: ";
                    cin >> skyConditions >>wind >> precipitation;

                }





            switch(sw.currentWeather)

            {


            case sw.moderateWeather:

                sw.Moderate_weather();


                break;

            case sw.extremeWeather:

                sw.Extreme_weather();


                break;

            case sw.idle:
                sw.Idle();

                break;

            case sw.exit:
                cout<< "\n Exiting. \n" << endl;
                break;

            default:

                cout << "\nWrong input. Please try again.\n" << endl;
                break;
            }

            } while( skyConditions!= 99 &&  wind !=99 && precipitation !=99 ); break;


        case 4:
            {

            bool check= hub.reboot();
            if(check)
                main();
            }
            break;

        case 0:
            cout<<" Exiting. Take care!"<<endl;
            break;

        default:
            cout<< "\nWrong input! Please follow the instructions and try again.\n" << endl;
            break;

        }




    } while (choice != 0);





}
