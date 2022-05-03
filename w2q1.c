#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char s1[200],s2[100],s3[200];
    int l,i,j;
    printf("enter the first string  ");
    gets(s1);
    printf("enter the second string  ");
    gets(s2);
    strcat(s1, s2);
    l=strlen(s1);
    j=l-1;
    for (i = 0; i <l; i++)
    {
        s3[i] =s1[j];
        j--;
    }
    printf("the concated reverse string is    %s" ,s3);
    return 0;
}
 