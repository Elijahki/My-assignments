//Bank customer program
/*
Name:
Reg:
Description:
*/

#include<stdio.h>
int main(){
	
	float Age,Annual_income;
	
	printf("Enter Age:");
	scanf("%f",&Age);
	
	printf("Enter annual income:");
	scanf("%f",&Annual_income);
	
	if(Age>=21&&Annual_income>=21000){
	printf("Congratulations,you qualify for loan.");
	}else{
	printf("Unfortunately,we are unable to offer you loan at this time.");
}
return 0;
}