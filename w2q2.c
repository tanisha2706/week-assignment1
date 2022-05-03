#include<stdio.h>
int main()
{
    int a[10],n,i,p,even_sum=0,odd_sum=0;
    printf("enter the elements of array: \n ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            even_sum=even_sum+a[i];
        }
        else
        {
            odd_sum=odd_sum+a[i];
        }
    }
    printf("sum of even numbers %d   \n",even_sum);
    printf(" sum of odd numbers %d",odd_sum);
    return 0;
}