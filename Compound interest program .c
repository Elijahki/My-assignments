//simple compound interest program 
/*
Name:Kiprotich Ng'etich 
Reg :PA106/G/28708/25
Description :program to perform compound interest 
*/

#include<stdio.h>
#include <math.h>

int main ()
 {

float principle;
float rate;
float time;
int n;
float amount ;

//prompt the user to enter the principle 
printf("enter principle: ") ;
scanf("%f",&principle);

//prompt the user to enter the value of the rate 
printf("enter rate: ");
scanf("%f", &rate );

//prompt the user to enter time 
printf("enter time: ");
scanf("%f", &time );

//prompt the user to enter value of n
printf("enter n");
scanf("%d", &n);

//calculate the amount after compound interest 
amount =principle*pow(1+rate/n, n*time) ;
printf("amount is %f", amount );

return 0 ;
}