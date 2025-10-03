//c program to output the volume and surface area of a cylinder
/*
Name:Kiprotich Ng'etich 
Reg:PA106/G/28708/25
Description:A simple program to perform survice area and volume 
*/

#include<stdio.h>

int main ()
{
float pi=3.142;
float radius, height, volume, surface_area;

//prompt the user to enter radius
printf("enter radius :");
scanf("%f", &radius );

//prompt the user to enter height
printf("enter height :");
scanf("%f", &height );

//calculation of surface area and the volume
volume=pi*radius *radius *height;
surface_area =2*pi*radius *radius +2*pi*radius *height;

//display volume
printf("\n volume is %f",volume );
printf("\n surface_area is %f",surface_area );

return 0 ;
} 
