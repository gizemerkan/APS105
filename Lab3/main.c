#include <stdio.h>
#include <stdlib.h>

//functions
double functionX (double num1, double num2, double num3, double num4, double x){
	return ((num1*(x*x*x)) + (num2*(x*x)) + (num3*x) +num4);
}

double derivFunc (double num1, double num2, double num3, double num4, double x){
	return ((3*num1*(x*x)) + (2*num2*(x)) + num3);
}

int main(int argc, char **argv){
	int iterations=0;
	double num1=0, num2=0, num3=0, num4=0, difference=0;
	double precision=0, xNew=0, xOld=0, division=0;
	
	printf("Enter the coefficients (a, b, c, d): ");
	scanf("%lf %lf %lf %lf", &num1, &num2, &num3, &num4);
	
	printf("Enter the initial guess for x: ");
	scanf("%lf", &xOld);
	
	printf("Enter the precision: ");
	scanf("%lf", &precision);
	
	//calc the root using newtons method
	do {
		
	division = ((functionX(num1,num2,num3,num4,xOld))/(derivFunc(num1,num2,num3,num4,xOld)));
	xNew = xOld - division;
	difference =fabs(xNew-xOld);
	xOld=xNew;
	iterations++;
	
	} while ((difference)>precision);
	
	printf("f(x) = 0 at x = %.3lf\n", xNew);
	
	printf("Number of iterations = %d\n", iterations);
	
	return 0;
}
