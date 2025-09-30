//simple to display exams eligibility
/*
Name:
Reg:
Describtion:
*/

#include<stdio.h>
int main() {
    int attendances;
    int average_mark;

    printf("Enter the percentage attendances:");
    scanf("%d",&attendances);

    printf("Enter the average marks:");
    scanf("%d",&average_mark);

    if (attendances>=75&&average_mark>=40)
    {
        printf("Legible to do exams");
    }
    else{
        printf("Not legible");
    }
   return 0; 
}