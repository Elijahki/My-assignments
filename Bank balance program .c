//simple Bank Balance program
//single line comment 
/*
Name :Kiprotich Ng'etich
Reg :PA106/G/28708/25
Description :simple program to display Bank Balance 2025 September 

*/
#include<stdio.h>//precessor directive ;scanf(""), printf("");;
//main function
int main () {
int age ;
int IDNumber ;
int height ;
int bankbalance;
int rent ;

printf("enter your age:\n");
scanf("%d", &age );
printf("your age is %d.\n",age);

printf("enter your IDNumber: \n");
scanf("%d",&IDNumber );
printf("your IDnumber is %d.\n", IDNumber );

printf("enter your height :\n");
scanf("%d", &height );
printf("your height is %d\n", height );

printf("enter your bankbalance:\n");
scanf("%d",&bankbalance);
printf("your bank balance is %d\n",bankbalance);

printf("enter your rent :\n");
scanf("%d",&rent );
printf("your rent is %d\n", rent );

return 0;
}