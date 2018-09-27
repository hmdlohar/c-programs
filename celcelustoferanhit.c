#include<stdio.h>
//#include<conio.h>
void main()
{
    float c,f;
    int choice;
    //clrscr();
    printf("Enter your Choice:\nfor Celsius to Faheranheit Enter No '1'\nfor Faheranheit to Celsius Enter No '2'\n");
    scanf("%d",&choice);
    if(choice==1)
    {
		printf("Enter Temperature in Celsius: ");
		scanf("%f",&c);
		f=(c*1.8)+32;
		printf("Temperature in Fahrenheit is: %0.2f",f);
	}
	else if(choice==2)
	{
		printf("Enter Temperature in Fahrenheit: ");
		scanf("%f",&f);
		c=(f-32)/1.8;
		printf("Temperature in Celsius is: %0.2f",c);
	}
	else
	{
			printf("Invalued Choice");
	}

    //getch();
}