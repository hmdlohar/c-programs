#include<stdio.h>
//#include<conio.h>
void main()
{
    int n,i,j;
    //clrscr();
	printf("Enter N: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1||i==n||j==1||j==n)
			{
				printf("%d",j);
			}
			else if(i==n/2+1&&j==n/2+1)
			{
				printf("%d",j);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
    //getch();
}