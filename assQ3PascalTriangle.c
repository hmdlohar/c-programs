#include<stdio.h>
//#include<conio.h>
void main()
{
    int n,i,j,h,p,q,fu,fd1,fd2;
    //clrscr();
    printf("Input N: ");
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
            fu=1;
            fd1=1;
            fd2=1;
            for(q=1;q<i;q++)
            {
				fu=fu*q;
			}
			for(q=1;q<j;q++)
			{
				fd1*=q;
			}
			for(q=1;q<=i-j;q++)
			{
				fd2*=q;
			}
			printf("%d ",fu/(fd1*fd2));
        }
        printf("\n");
    }
    //getch();
}

