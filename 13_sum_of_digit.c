#include<stdio.h>
int main()
{
    int n,c=0,rem, sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n!=0){
        rem = n % 10;
        sum = sum +rem;
        n = n / 10;
        }
    printf("sum of digit of given number is : %d ", sum);
}