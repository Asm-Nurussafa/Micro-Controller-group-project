#ifndef SMART_WINDOW_H
#define SMART_WINDOW_H
#include "AC.h"


class Smart_Window
{
    public:
        Smart_Window();
        virtual ~Smart_Window();
        void Open();
        void Close();
        void Weather_check(int sc,int p,int wind); // sc= sky conditions, p= precipitation
        int status; //1=open,0=close
        int Send_status();
        int sec = 0;


    private:

};

#endif // SMART_WINDOW_H
