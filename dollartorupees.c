#include<stdio.h>
//#include<conio.h>
void main()
{
    int rate,r,d;
    //clrscr();
	printf("Enter Amount in Dollar: ");
	scanf("%d",&d);
	printf("Enter Conversion Rate: ");
	scanf("%d",&rate);
	r=d*rate;
	printf("Amount in Rupees is: %d",r);
    //getch();
}