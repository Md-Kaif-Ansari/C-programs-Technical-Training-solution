#include<stdio.h>
int main(){
    int n;
    printf("Enter any number :");
    scanf("%d",&n);
    if(n==0){
         printf("%d is neither positive nor negative . ");
    }
    else if(n>0){
        printf("%d is a positive number . ",n);
    }
    else{
         printf("%d is a Negative number . ",n);
    }
}