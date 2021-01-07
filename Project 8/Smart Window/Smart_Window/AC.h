#ifndef AC_H
#define AC_H
#include "Smart_Window.h"


class AC
{
    public:
        AC();
        virtual ~AC();

        int fanspeed, temperature;
        void Changefanspeed(int change_value, char opt);
        void TemperatureSetting(char opt);
        int status=0;
        int Send_status();

    private:


};

#endif // AC_H
