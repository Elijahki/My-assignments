//Program to prompt thje user to enter numbers from 1 to 20
/*
name:
reg:
description:
*/

#include <stdio.h>

int main()
{
float password;
do{
printf("Enter password");
scanf("%f",&password);
if(password!=1234)
{	
printf("access not granted");
}
}while(password!=1234);

	printf("Acess granted");


return 0;
}
