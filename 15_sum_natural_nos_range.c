#include<stdio.h>
int main()
{
    int a,b,i,sum=0;
    printf("Enter starting range : ");
    scanf("%d",&a);
    printf("Enter  number upto you want sum : ");
    scanf("%d",&b);
    for(i=a; i<=b; i++)
    {
    sum += i;
    }
    printf("Sum = %d",sum);
}