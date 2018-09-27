#include<stdio.h>
//#include<conio.h>
void main()
{
    float p,n,r,si;
    //clrscr();
    printf("Enter Principal Amount: ");
    scanf("%f",&p);
    printf("Enter Rate of Interest: ");
    scanf("%f",&r);
    printf("Enter Number of year: ");
    scanf("%f",&n);
    si=(p*n*r)/100;
    printf("Simple Interest is: %0.2f",si);
    //getch();
}