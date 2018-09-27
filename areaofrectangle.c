#include<stdio.h>
//#include<conio.h>
void main()
{
    float area,h,w;
    //clrscr();
    printf("Enter Height of Rectangle: ");
    scanf("%f",&h);
    printf("Enter Width of Rectangle: ");
    scanf("%f",&w);
    area=h*w;
    printf("Area of Rectangle is: %0.2f",area);
    //getch();
}