#include <stdio.h>

#define idle 100
#define moderate 200
#define extreme 300
#define activateLeft 1
#define activateRight 0

void control(int newEvent);
int state= idle;


int main ()
{
               // current state

    int newEvent;
    do
    {
        printf(" Current state= %d \nEnter value for new event: ", state);
                       // 1=activateLeft ; 0= activateRight
        scanf("%d", &newEvent);
        control(newEvent);

    }
    while (newEvent!= 900);
}

void control (int newEvent)
{
    switch(state)
        {
            case idle:
            if( newEvent == 1)
            {
                state= moderate;

            }
            else if( newEvent == 0)
            {
                state= extreme;

            }
            else { printf (" Bad input; try again.");}
            break;

            case moderate:
            if( newEvent == 0)
            {
                state= idle;

            }
            else if( newEvent == 1)
            {
                state= moderate;

            }

            else { printf (" Bad input; try again.");}
            break;

            case extreme:
            if ( newEvent == 1)
            {
                state=idle;

            }
            else if( newEvent == 0)
            {
                state= extreme;

            }
            else { printf (" Bad input; try again.");}
            break;

            default: break;
        }
        printf("State= ", state);

}
