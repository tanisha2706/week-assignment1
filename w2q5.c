#include<stdio.h>
int main()
{
    int i,j,k;
    int a[100][100],b[100][100],c[100][100],d[100][100];
    printf("enter a 2-d array \n");
    for(i=0;i<2;i++)
    {
    for(j=0;j<2;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    printf("enter an array of 2d size \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
        scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
        c[i][j]=0;
        for(k=0;k<2;k++)
        {
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
        }
        }
    }
    printf("the multiplication of the a and b is \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
        printf("%d  ",c[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
        d[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("the addition of the a and b is \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
        printf("%d  ",d[i][j]);
        }
        printf("\n");
    }
    return 0;
}
 