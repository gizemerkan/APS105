//APS105s Due Date: Wed May 16 
//basic math calculations & standard user input/output
//using only printf, scanf to compute the sum of two mixed fractions

#include <stdio.h>
#include <math.h>

int main(void){
	
	int wholeNum=0, numerator=0, denominator=0;
	int secondWholeNum=0, secondNum=0, secondDenom=0;
	int finalWholeNum=0, finalNum=0, finalDenom=0;
	
	//get user input
	printf("Please enter first mixed number (whole number numerator denominator): ");
	scanf("%d %d %d", &wholeNum, &numerator, &denominator);
	printf("Please enter second mixed number (whole number numerator denominator): ");
	scanf("%d %d %d",&secondWholeNum, &secondNum, &secondDenom);
	
	//calculations
	finalNum = (numerator*secondDenom) + (secondNum*denominator);
	finalDenom = denominator*secondDenom;
	finalWholeNum = wholeNum+secondWholeNum;
	
	if (finalNum > finalDenom){
		finalNum = finalNum % finalDenom;
		finalWholeNum++;
	}

	printf("        %d       and     %d/%d\n", wholeNum, numerator, denominator);
	printf("        %d       and     %d/%d\n", secondWholeNum, secondNum, secondDenom);
	printf("------------------------------\n");
	printf("        %d      and     %d/%d\n", finalWholeNum, finalNum, finalDenom);
	
	return 0;
}
