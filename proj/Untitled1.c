#include <stdio.h>

int
main (void)
{
        bool  redT,yellowT,greenT,greenP,redP;

   int state ;


   switch (state)
   {

       case  RedTGreenP:
           redT=true;
          yellowT=false;
          greenT=false;
          greenP=true;
          redP=false;

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
