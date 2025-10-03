//Bank customer program
/*
Name:Kiprotich Ngetich
Reg:PA106/G/28708/25
Description:Program to decide wheather qualify for loan or not
*/

#include<stdio.h>
int main(){
	
	float Age,Annual_income;

	//prompt the user to enter age
	printf("Enter Age:");
	scanf("%f",&Age);

	//prompt the user to enter annual income
	printf("Enter annual income:");
	scanf("%f",&Annual_income);

	//Display wheather one qualifies for loan or not
	if(Age>=21&&Annual_income>=21000){
	printf("Congratulations,you qualify for loan.");
	}else{
	printf("Unfortunately,we are unable to offer you loan at this time.");
}
return 0;

}
