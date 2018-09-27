#include<stdio.h>
//#include<conio.h>
void main()
{
    int l,i,j,min,mini;
    char temp;
    char a[10];
    //clrscr();
    printf("Enter Length of Array between 1 to 50: ");
    scanf("%d",&l);
    for(i=0;i<l;i++)
    {
        printf("Enter Element %d for Array: ",i);
        scanf("%d",&a[i]);
    }
	for(i=0;i<l;i++)
	{
		min=a[i];
		mini=i;
		for(j=i;j<l;j++)
		{
			if(a[j]<min)
			{
				mini=j;
				break;
			}
		}
		temp=a[mini];
		a[mini]=a[i];
		a[i]=temp;
	}
	printf("Sorted Numbers: ");
    for(i=0;i<l;i++)
    {
        printf("%d, ",a[i]);

    }

    //getch();
}
