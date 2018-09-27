#include<stdio.h>
//#include<conio.h>
void main()
{
    int a[10][10],b[10][10],sum[10][10],i,j,r,c;
    //clrscr();
    printf("Enter Number of Rows in Matrix: ");
    scanf("%d",&r);
    printf("Enter Number of Coloums in Matrix: ");
    scanf("%d",&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("Enter Value for Element (%d, %d) for Matrix A: ",i+1,j+1);
		scanf("%d",&a[i][j]);
		}
		
	}
	printf("\nMatrix A\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("Enter Value for Element (%d, %d) for Matrix B: ",i+1,j+1);
		scanf("%d",&b[i][j]);
		}
		
	}
	printf("\nMatrix B\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		sum[i][j]=a[i][j]+b[i][j];
		}
		
	}
	printf("\nMatrix A+B\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
    //getch();
}
