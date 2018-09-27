#include<stdio.h>
//#include<conio.h>
void main()
{
    int a,b,c,d;
    //clrscr();
    printf("Enter Value of A: ");
    scanf("%d",&a);
    printf("Enter Value of B: ");
    scanf("%d",&b);
    printf("Enter Value of C: ");
    scanf("%d",&c);
    printf("Enter Value of D: ");
    scanf("%d",&d);
    if(a>b&&a>c&&a>d)
    {
        printf("A is Grater.");
    }
    else if(b>c&&b>d)
    {
        printf("B is Grater.");
    }
    else if(c>d)
    {
        printf("C is Grater.");
    }
    else
    {
        printf("D is Grater");
    }
    //getch();
}
