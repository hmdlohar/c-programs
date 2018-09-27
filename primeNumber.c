#include<stdio.h>
//#include<conio.h>
void main()
{
    int n,i,j,isPrime;
    //clrscr();
    printf("Enter Number: ");
    scanf("%d",&n);
    printf("1\n2\n");
    for(j=3;j<=n;j++)
    {
        isPrime=1;
        for(i=2;i<j;i++)
        {
            if(j%i==0)
            {
            isPrime=0;
            break;
            }
        }
        if(isPrime==1)
        {
        printf("%d\n",j);
        }
    }

    //getch();
}
