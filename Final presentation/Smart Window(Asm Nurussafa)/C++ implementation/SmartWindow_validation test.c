#include <stdio.h>
#include <stdlib.h>



#define idle 100
#define moderate 200
#define extreme 300
#define activateLeft 1
#define activateRight 0

void control(int newEvent);
int state= idle;
int getState();





//each transition at least once
int testEventSequence[] = {activateLeft,activateLeft,activateRight,activateRight,activateRight,activateLeft};
//length of test sequence
int testSequenceLength = sizeof(testEventSequence)/sizeof(testEventSequence[0]);
//expected output
int exptectedOutputTestEventSequence[] = {moderate, moderate, idle, extreme, extreme, idle};
//and further tests...each state at least once
int testEventSequence2[] = {activateLeft,activateRight};

//storing the test result
int testOutputTestEventSequence[]={0,0,0,0,0,0,0};
int countErrors=0;

//function for testing the OneBitPredictor - validation test
void validationTestRun();
//print the test result
void printTestResult();


int main(void) {
	validationTestRun();
	printTestResult();
	return EXIT_SUCCESS;
}

//test implementation
void validationTestRun(){
	//test loop...
	for(int testIndex =0; testIndex < 6; testIndex++){
		control(testEventSequence[testIndex]);
		if(getState() == exptectedOutputTestEventSequence[testIndex]){
			testOutputTestEventSequence[testIndex]=1;
		}else{
			testOutputTestEventSequence[testIndex]=0;
			countErrors++;
		}

	}
}

void printTestResult(){
	if(countErrors){
		printf("%d error(s) identified.\n",countErrors);
		for(int i=0; i<testSequenceLength; i++){
			if(!testOutputTestEventSequence[i]){
				printf("Error at event count %d. \n",i);
				printf("Expected state for event %d is %d\n",testEventSequence[i],exptectedOutputTestEventSequence[i]);
			}
		}
	}else{
		printf("No errors identified!\n");
	}
}
int getState(){
	return state;
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


}

