#include<stdio.h>
//#include<conio.h>
void main()
{
    int n,sum=0,mod,n2;
    //clrscr();
    printf("Input N: ");
    scanf("%d",&n);
    n2=n;
	while(n%10!=0)
	{
		mod=n%10;
		sum+=mod*mod*mod;
		n=n/10;
	}
	if(sum==n2)
	{
		printf("The given number is Armstrong.");
	}
	else
	{
		printf("The given number is not Armstrong.");
	}
    //getch();
}