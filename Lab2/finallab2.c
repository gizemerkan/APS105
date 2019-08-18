#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void){
	//define variables
	int trials=0, low=0, high=0, i;
	double integral=0, proportion=0, randomX=0, randomY=0, trueY=0, y=0, count=0, random=0;
	//seed random num gen to seed==0
	srand(0.0);
	
	do{ //do while loop does... then checks
		// prompt user input
        printf("Please enter the number of trials (n): ");
        scanf("%d", &trials);
        //exit program if trials<1 --> in the doc this was a condition
        if (trials<1){
            printf("Exiting.\n");
            return 0;
        }
        
        printf("Enter the interval of integration (a b): ");
        scanf("%d %d", &low, &high);
        // interval must be in sequential order 
        if (high<low){
            printf("Invalid interval!\n");
            printf("Enter the interval of integration (a b): ");
            scanf("%d %d", &low, &high);
        }
		
		//checks if neg or pos and evals accordingly 
        if (high<0){
            y = exp((-(low*low))/2) ;
        } else if (low>0){
            y = exp((-(high*high))/2) ;
        } else {
            y= 1;
        }
        //for loop to keep gen rand numbers
        for (i=0;i<trials;i++){
        
        random = rand() / (double) RAND_MAX; //given in doc
		randomX = random* (high-low) + low;
		random = rand() / (double) RAND_MAX;
		randomY = random* y;
		trueY = exp((-(randomX*randomX))/2);
		
            if (randomY < trueY) //if less then func then it falls in range
                count++; 
        }
        
        proportion = (count)/trials; 
        integral = proportion*(high-low);
        
        printf("Integral of exp(-x^2/2) on [%d.000,%d.000] with n = %d trials is: %.3lf\n", low, high, trials, integral);
        printf("\n");
		count=0; //ensures that count starts at zero each time it loops
	
	} while (trials>=1); //while loop condition checks at the end 
	return 0;
}
