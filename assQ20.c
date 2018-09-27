#include<stdio.h>
//#include<conio.h>
void main()
{
    int a[50],i,j,choice,n=50,t1,min,mini,temp;
    //clrscr();
    choice=1;
    while(choice!=0)
    {
        printf("\n\nEnter your choice\n1.for inserting in array\n2.for Delete Element In Array\n3.for Search Element in array\n4.for Sorting Array\n\n0. for Exit program\n");
        scanf("%d",&choice);
        if(choice==1)
        {
            printf("Enter Number of Element to be inserted: ");
            scanf("%d",&n);
            for(i=0; i<n; i++)
            {
                printf("Enter Element %d: ",i+1);
                scanf("%d",&a[i]);
            }
            printf("Elements in array: ");
            for(i=0; i<n; i++)
            {
                printf("%d ",a[i]);
            }

        }
        else if(choice==2)
        {
            printf("Enter element position to be deleted: ");
            scanf("%d",&t1);
            for(i=t1-1; i<n; i++)
            {
                a[i]=a[i+1];
            }
            n--;
            printf("Elements in array: ");
            for(i=0; i<n; i++)
            {
                printf("%d ",a[i]);
            }
        }
        else if(choice==3)
        {
            printf("Enter Element to be searched: ");
            scanf("%d",&t1);
            for(i=0; i<n; i++)
            {
                if(a[i]==t1)
                {
                    printf("Number found at position %d",i);
                    break;
                }
                else
                {
                    if(i==n-1)
                    {
                        printf("Number not found.");
                        break;
                    }
                }
            }
        }
        else if(choice==4)
        {
            for(i=0; i<n; i++)
            {
                min=a[i];
                mini=i;
                for(j=i; j<n; j++)
                {
                    if(a[j]<min)
                    {
                        mini=j;
                    }
                }
                temp=a[mini];
                a[mini]=a[i];
                a[i]=temp;
            }
            printf("Sorted Numbers: ");
            for(i=0; i<n; i++)
            {
                printf("%d, ",a[i]);

            }
        }
        else if(choice==0)
        {
            exit(0);
        }
    }
    //getch();
}
