#include<stdio.h>
//#include<conio.h>
void main()
{
    int n,i,j,h,p;
    //clrscr();
    printf("Input N: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        h=n-i+1;
        for(p=1;p<=h;p++)
        {
            printf(" ");
        }
        for(j=n;j>=h;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    //getch();
}
