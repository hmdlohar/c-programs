#include<stdio.h>
#include<string.h>
//#include<conio.h>
void main()
{
    int l,j,i,h,p,t;
    char str[20]="AHMEDABAD";
    //clrscr();
    l=strlen(str);
    t=0;
    for(i=l;i>=0;i=i-2)
     {
		 h=l-i;
		for(p=1;p<=h;p++)
		{
			printf(" ");
		}
        for(j=t;j<l-t;j++)
        {
            printf("%c ",str[j]);
        }
     printf("\n");
     t++;
     }
    //getch();
}