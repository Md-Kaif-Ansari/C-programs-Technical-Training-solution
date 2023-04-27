#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter any number upto you want sum : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
    sum += i;
    }
    printf("Sum = %d",sum);
}