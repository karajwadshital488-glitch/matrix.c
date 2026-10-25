#include<stdio.h>
void upper (int a[10][10],int n)
{
    int i,j,sum=0;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i<j)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("upper triangular sum=%d",sum);

}
int main()
{
    int a[10][10],n,i,j;

    printf("enter the order of matrix:");
    scanf("%d",&n);

    printf("enter the matrix elements:\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);

        }

    }
    upper(a,n);
    return 0;

}
