#include <stdio.h>
#include <math.h>
int main()
{
    int n,fd, ld,d, sn;
    printf("Enter number = ");
    scanf("%d", &n);
    ld = n % 10;
    d= (int)log10(n);
    fd= (int) (n / pow(10,d));
    sn=ld;
    sn= sn* (int) round(pow(10,d));
    sn=sn+ (n % ((int)round(pow(10,d))));
    sn= sn-ld;
    sn= sn+fd;
    printf("swapped number is   %d", sn);
    return 0;
}