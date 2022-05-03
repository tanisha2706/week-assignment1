#include<stdio.h>
int main()
{
    int prv=0,pre=1,t,i,n;
    printf("enter the number of terms = \n ");
    scanf("%d",&n);
    printf("the fibonacci series:  ");
    printf("0   1    ");
    for (i=3;i<=n;i++)
    {
        t=prv+pre;
        printf("%d   ",t);
        prv=pre;
        pre=t;
    }
    return 0;
}
 