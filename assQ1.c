#include<stdio.h>
//#include<conio.h>
void main()
{
    int n,i;
    //clrscr();
    printf("Input N: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d ",(i*i)+7);
        }
        else
        {
            printf("%d ",i);
        }
    }


    //getch();
}
