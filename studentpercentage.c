#include<stdio.h>
//#include<conio.h>
void main()
{
    int s1,s2,s3,s4,s5,total,rollno;
    char name[20];
    char grade;
    float per;
    //clrscr();
    printf("Enter Student Name: ");
    scanf("%s",name);
    printf("Enter Roll No: ");
    scanf("%d",&rollno);
    printf("Enter Marks of Subject S1: ");
    scanf("%d",&s1);
    printf("Enter Marks of Subject S2: ");
    scanf("%d",&s2);
    printf("Enter Marks of Subject S3: ");
    scanf("%d",&s3);
    printf("Enter Marks of Subject S4: ");
    scanf("%d",&s4);
    printf("Enter Marks of Subject S5: ");
    scanf("%d",&s5);
    total=s1+s2+s3+s4+s5;
    per=(total*100)/500;
    if(per>=70)
    {
        grade='A';
    }
    else if(per>=60)
    {
        grade='B';
    }
    else if(per>=50)
    {
        grade='C';
    }
    else if(per>=35)
    {
        grade='D';
    }
    else
    {
        grade='F';
    }
    printf("-----------------------------------------\nStudent Name: %s\n",name);
    printf("Student Roll No: \t%d\n",rollno);
    printf("Subject 1 marks: \t%d\n",s1);
    printf("Subject 2 marks: \t%d\n",s2);
    printf("Subject 3 marks: \t%d\n",s3);
    printf("Subject 4 marks: \t%d\n",s4);
    printf("Subject 5 marks: \t%d\n",s5);
    printf("Total marks: \t\t%d\n",total);
    printf("Percentages: \t\t%0.2f\n",per);
    printf("Grade: %c",grade);
    //getch();
}