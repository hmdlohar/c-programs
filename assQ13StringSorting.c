#include<stdio.h>
#include<string.h>
//#include<conio.h>
void main()
{
    int l,i,j,min,mini;
    char temp;
    char str[10];
    //clrscr();
    printf("Enter String: ");
    scanf("%s",str);
    l=strlen(str);
	for(i=0;i<l;i++)
	{
		min=str[i];
		mini=i;
		for(j=i;j<l;j++)
		{
			if(str[j]<min)
			{
				mini=j;
				break;
			}
		}
		temp=str[mini];
		str[mini]=str[i];
		str[i]=temp;
	}
	printf("Sorted String: %s",str);
	
    //getch();
}