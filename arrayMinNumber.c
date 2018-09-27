#include<stdio.h>
//#include<conio.h>
void main()
{
    int a[5],i,min;
    //clrscr();
	for(i=0;i<=4;i++)
	{
		printf("Enter No %d: ",i);
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=0;i<=4;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("Minimum No is: %d",min);
    //getch();
}
