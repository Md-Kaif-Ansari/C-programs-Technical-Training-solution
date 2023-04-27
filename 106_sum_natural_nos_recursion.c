#include<stdio.h>

int sumrec(int n){
    if(n==1)
        return 1;
    else
        return n + sumrec(n-1);
    
}
int main()
{
    int n;
    printf("enter number upto you want sum : ");
    scanf("%d",n);
    printf("sum = %d ",sumrec(n));
    
}