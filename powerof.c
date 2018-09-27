#include<stdio.h>
//#include<conio.h>
void main()
{
    int num,exp,power,i;
    //clrscr();
	printf("Enter Number: ");
	scanf("%d",&num);
	printf("Enter Exponent: ");
	scanf("%d",&exp);
	power=1;
	for(i=1;i<=exp;i++)
	{
		power=power*num;
	}
	printf("%d raised to a power of %d = %d",num,exp,power);
    //getch();
}