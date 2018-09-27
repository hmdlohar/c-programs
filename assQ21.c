#include<stdio.h>
#include<string.h>
//#include<conio.h>
void main()
{
    char str1[50],str2[50],str3[50];
    int l;
    //clrscr();
    printf("Enter String 1:");
    scanf("%s",str1);
    printf("Enter String 2:");
    scanf("%s",str2);
    printf("Copying String1 into String3.");
    strcpy(str3,str1);
    printf("\nString3 After Copy=\"%s\"",str3);
    printf("\nLength of String1=%d\nLength of String2=%d",strlen(str1),strlen(str2));
    printf("\nConcatenating string1 with string2=\"%s\" ",strcat(str1,str2));
    //getch();
}
