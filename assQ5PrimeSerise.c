#include<stdio.h>
//#include<conio.h>
void main()
{
    int n,i,j,prime;
    //clrscr();
    printf("Input N: ");
    scanf("%d",&n);
    printf("1\n2");
	for(i=3;i<=n;i++)
	{
		prime=1;
		if(i%2==0)
		{
			prime=0;
		}
		else
		{
			for(j=3;j<i-1;j=j+2)
			{
				if(i%j==0)
				{
					prime=0;
					break;
				}
			}
		}
		if(prime==1)
		{
			printf("\n%d",i);
		}
	}
    //getch();
}
