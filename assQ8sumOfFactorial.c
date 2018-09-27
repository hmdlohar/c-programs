// C program to print sum of n!.
#include<stdio.h>
//#include<conio.h>
void main()
{
    int n,i,j,fact,sum;
    //clrscr();
    printf("Input N: ");
    scanf("%d",&n);
    sum=0;
	for(i=1;i<=n;i++)
	{
		fact=1;
		for(j=1;j<=i;j++)
		{
			fact=fact*j;
		}
		sum+=fact;
	}
	printf("sum=");
    for(i=1;i<=n;i++)
	{
        printf("%d!+ ",i);
	}
	printf("= %d",sum);
    //getch();
}
