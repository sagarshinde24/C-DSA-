#include<stdio.h>

void insertion(float [],int);
void shell(float[],int);

int main()
{
    int i, n,op;
    float a[30];

    do
    {
        printf("\n 1)Insertion Sort \n 2) Shell Sort  \n 3) Quit");
        printf("Enter your choice :");
        scanf("%d",&op);

        if(op==1)
        {
            printf("\n Enter no. of elements :");
            scanf("%d",&n);
            printf("\n Enter Array elements :");
            for(i=0;i<n;i++)
                scanf("%f",&a[i]);
            insertion(a,n);
            printf("\n Sorted array is :");
            for(i=n-1;i>=n-5;i--)
                printf("%7.2f",a[i]);

        }

        if(op==2)
        {
            printf("\n Enter no. of elements :");
            scanf("%d",&n);
            printf("\n Enter Array elements :");
            for(i=0;i<n;i++)
                scanf("%f",&a[i]);
            shell(a,n);
            printf("\n Sorted array is :");
            for(i=n-1;i>=n-5;i--)
                printf("%7.2f",a[i]);
        }

    }while(op!=3);
    return 0;
}


void shell(float a[],int n)
{
    int i,j,step;
    float temp;
    for(step=n/2;step>0;step=step/2)
    {
        for(i=step;i<n;i++)
        {
            temp=a[i];
            for(j=i;j>=step;j=j-step)
                if(temp<a[j-step])
                    a[j]= a[j-step];
                else
                    break;
            a[j]=temp;
        }

    }


}


void insertion(float a[],int n)
{
    int i,j;
    float temp;
    for(i=1; i<n;i++)
    {
        temp=a[i];
        for(j=i-1;j>=0 && a[j]>temp;j--)
            a[j+1]=a[j];
        a[j+1]=temp;

    }
}
 