#include<stdio.h>
//#include<conio.h>
void main()
{
    int a[10][10],b[10][10],sum[10][10],i,j,r,c,choice,k;
    //clrscr();
    r=3;
    c=3;
    for(i=0;i<r;i++){
		for(j=0;j<r;j++){
			sum[i][j]=0;
		}
	}
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("Enter Value for Element (%d, %d) for Matrix A: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }

    }
    printf("\nMatrix A\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("Enter Value for Element (%d, %d) for Matrix B: ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }

    }
    printf("\nMatrix B\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("\nEnter Choice\n1.for Addition.\n2.for Subtraction.\n3.for Multiplication.\n");
    scanf("%d",&choice);
    if(choice==1)
    {
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                sum[i][j]=a[i][j]+b[i][j];
            }

        }
        printf("\nMatrix A+B\n");
    }
    else if(choice==2)
    {
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                sum[i][j]=a[i][j]-b[i][j];
            }

        }
        printf("\nMatrix A-B\n");
    }
    else if(choice==3)
    {
        for(i=0; i<r; i++)
        {
            for(j=0; j<r; j++)
            {
                for(k=0; k<c; k++)
                {
                    printf("%d + %d",a[i][k],b[k][j]);
                    sum[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
         printf("\nMatrix A*B\n");
    }


    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    //getch();
}
