#include<stdio.h>
//#include<conio.h>
void main()
{
     int i,j,n,h,p;
     //clrscr();
     printf("Enter Value of N:");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
		 h=n-i+1;
		for(p=1;p<=h;p++)
		{
			printf(" ");
		}
        for(j=1;j<=i;j++)
        {
            if(j==1||j==i)
            {
				printf("%d ",j);
			}
			else  if(i==n&&j==(i/2)+1)
			{
				printf("%d ",j);
			}
			else
			{
				printf("  ");
			}
        }
     printf("\n");
     }
     for(i=n-1;i>=1;i--)
     {
		 h=n-i+1;
		for(p=1;p<=h;p++)
		{
			printf(" ");
		}
        for(j=i;j>=1;j--)
        {
            if(j==1||j==i)
            {
				printf("%d ",j);
			}
			else
			{
				printf("  ");
			}
        }
     printf("\n");
     }
//getch();
}