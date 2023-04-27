#include<stdio.h>
int main(){
    int n;
    printf("Enter any number :");
    scanf("%d",&n);
    if(n%2==0){
         printf("%d is a Even number . ");
    }
    else{
         printf("%d is a Odd number . ",n);
    }
}