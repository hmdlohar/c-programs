#include<stdio.h>
#include<string.h>
//#include<conio.h>
void main()
{
    int l,i,j;
    char str[10];
    char ch;
    //clrscr();
    printf("Enter String: ");
    scanf("%s",str);
    printf("\nEnter Character: ");
    scanf("%c",&ch);
    l=strlen(str);
	for(i=0;i<l;i++)
	{
		if(str[i]==ch)
		{
			for(j=i;j<=l;j++)
			{
				str[j]=str[j+1];
			}
		}
	}
	printf("\n%s",str);
    //getch();
}
