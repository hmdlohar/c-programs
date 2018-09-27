#include<stdio.h>
//#include<conio.h>
void main()
{
    char c;
    //clrscr();
	printf("Enter A Character: ");
	scanf("%c",&c);
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
	{
		printf("Character is Vowel.");
	}
	else
	{
		printf("Character is consonant.");
	}
    //getch();
}
