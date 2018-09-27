#include<stdio.h>
#include<string.h>
//#include<conio.h>
void main()
{
    int l,i,sum=0;
    char str[10];
    //clrscr();
    printf("Enter String: ");
    scanf("%s",str);
    l=strlen(str);
    printf("vowels in string: ");
	for(i=0;i<l;i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		{
			printf("%c, ",str[i]);
			sum++;
		}
	}
	printf("\nTotal vowela in string: %d",sum);
    //getch();
}
