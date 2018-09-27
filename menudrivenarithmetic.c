#include<stdio.h>
//#include<conio.h>
void main()
{
    int a,b,result;
    char op;
    //clrscr();
    a=5;
    printf("Enter Operation from +, -, * or / : ");
    scanf("%c",&op);
    printf("Enter Value for Number A: ");
    scanf("%d",&a);
    printf("Enter Value for Number b: ");
    scanf("%d",&b);
    switch(op)
    {
        case '+':
            result=a+b;
            printf("%d + %d = %d",a,b,result);
            break;
        case '-':
            result=a-b;
            printf("%d - %d = %d",a,b,result);
            break;
        case '*':
            result=a*b;
            printf("%d * %d = %d",a,b,result);
            break;
        case '/':
            result=a/b;
            printf("%d / %d = %d",a,b,result);
            break;
        default: 
			printf("Enter Valued Input");
    }
    //getch();
}
