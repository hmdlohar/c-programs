#include<stdio.h>
#include<string.h>
//#include<conio.h>
void main()
{
    char str[20];
    int l,i,j,h,p;
    //clrscr();
	printf("Enter String: ");
	scanf("%s",&str);
	l=strlen(str);
	for(i=0;i<=l;i++)
	{
		h=l-i;
		for(p=0;p<h;p++)
		{
			printf(" ");
		}
		for(j=0;j<i;j++)
		{
			if(j==0||j==i-1)
			{
				printf("%c ",str[j]+32);
			}
			else
			{
				printf("%c ",str[j]);
			}
		}
		printf("\n");
	}
	for(i=l-1;i>=0;i--)
	{
		h=l-i;
		for(p=0;p<h;p++)
		{
			printf(" ");
		}
		for(j=0;j<i;j++)
		{
			if(j==0||j==i-1)
			{
				printf("%c ",str[j]);
			}
			else
			{
				printf("%c ",str[j]+32);
			}
		}
		printf("\n");
	}
    //getch();
}