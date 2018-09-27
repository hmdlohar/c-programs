#include<stdio.h>
//#include<conio.h>
void main()
{
    int a[10][10],i,j,r,c;
    //clrscr();
    printf("Enter Number of Rows in Matrix: ");
    scanf("%d",&r);
    printf("Enter Number of Coloums in Matrix: ");
    scanf("%d",&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("Enter Value for Element (%d, %d): ",i+1,j+1);
		scanf("%d",&a[i][j]);
		}

	}
	printf("Matrix A:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("%d ",a[i][j]);
		}
		printf("\n");
	}
    //getch();
}
