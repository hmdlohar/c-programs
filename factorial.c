#include<stdio.h>
//#include<conio.h>
void main()
{
    int fact,i,n;
    //clrscr();
    printf("Enter Number: ");
    scanf("%d",&n);
    fact=1;
    for(i=1;i<=n;i++)
    {
			fact=fact*i;
	}
	printf("%d! = %d",n,fact);
    //getch();
}