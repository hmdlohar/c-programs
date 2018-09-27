#include<stdio.h>
//#include<conio.h>
void main()
{
    int no;
    //clrscr();
	printf("Enter A Number: ");
	scanf("%d",&no);
	if(no>0)
	{
		printf("No is Positive.");
	}
	else if(no<0)
	{
		printf("No is Negative.");
	}
	else
	{
		printf("No is Zero.");
	}
    //getch();
}
