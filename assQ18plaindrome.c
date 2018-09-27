#include<stdio.h>
#include<string.h>
//#include<conio.h>
void main()
{
    char str[20],str2[20];
    int i,j,l,h,p;
    //clrscr();
	printf("Enter String: ");
	scanf("%s",str);
	l=strlen(str);
	p=1;
    for(i=0;i<l;i++)
    {
        h=l-i-1;
        if(str[i]!=str[h])
        {
            p=0;
            break;

        }
    }
    if(p==1)
    {
        printf("Given String is plaindrome.");
    }
    else
    {
        printf("Given String is Not plaindrome.");
    }
    //getch();
}
