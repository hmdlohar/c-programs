#include<stdio.h>
//#include<conio.h>
void main()
{
    int n,i,j,h;
    //clrscr();
	printf("Enter N: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			h=n-i+1;
			printf("%d",h);
		}
		printf("\n");
	}
    //getch();
}