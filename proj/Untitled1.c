#include <stdio.h>

bool  redT,yellowT,greenT,greenP,redP;

   int state ;
#define RedTGreenP 0
#define RedTRedP 1
//... 

main (void) //loop()
{
        


   switch (state)
   {

       case  RedTGreenP:
           redT=true;
          yellowT=false;
          greenT=false;
          greenP=true;
          redP=false;
         // if(redT)//timeDelay 
          //    state = ...;    

       case RedTRedP:
            redT=true;
          yellowT=false;
          greenT=false;
          greenP=false;
          redP=true;


       case YellowTRedP:
            redT=false;
          yellowT=true;
          greenT=false;
          greenP=false;
          redP=true;

       case GreenTRedP:
            redT=false;
          yellowT=false;
          greenT=true;
          greenP=false;
          redP=true;

       case YellowTRedP:
            redT=false;
          yellowT=true;
          greenT=false;
          greenP=false;
          redP=true;

       case RedTRedP:
            redT=true;
          yellowT=false;
          greenT=false;
          greenP=false;
          redP=true;



   }

   return (0);
}
