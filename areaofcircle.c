#include<stdio.h>
//#include<conio.h>
void main()
{
    float area,r,pi=3.14;
    //clrscr();
    printf("Enter Radius of Circle: ");
    scanf("%f",&r);
    area=pi*(r*r); //A=πr2
    printf("Area of Circle is: %0.2f",area);
    //getch();
}