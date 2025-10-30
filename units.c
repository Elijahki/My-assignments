//Programme to calculate electricbill
/*
Name:Elijah Kiprotich Ng'etich
Reg:PA106/G/28708/25
Describtion:Programme to calculate electricbill
*/

#include <stdio.h>

float calculateelectricbill(int units){
	float bill;
	
	if(units<=100)
	{
		bill=units*10;
	}else if(units<=200)
	{
	bill=(100*10)+((units-100)*15);	
	}else
	{
		bill=(100*10)+(100*15)+((units-200)*20);
	} 
	return bill;
}
int main()
{
int units;

printf("Enter number of units consumed:");
scanf("%d",&units);	

printf("The total bill = Ksh.%2f\n",calculateelectricbill(units));
	return 0;
}