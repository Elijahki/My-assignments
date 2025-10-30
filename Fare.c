//Programme to calculate fare
/*
Name:Elijah Kiprotich Ng'etich
Reg:PA106/G/28708/25
Describtion:Programme to calculate fare
*/

#include <stdio.h>

float calculatefare(int distance){
	
	float fare = distance*50;
	return fare;
}
int main()
{
	float distance;
	
	printf("Enter the distance covered in km:");
	scanf("%f",&distance);
	
	printf("The total fare is Ksh.%.2f\n",calculatefare(distance));
	return 0;
}