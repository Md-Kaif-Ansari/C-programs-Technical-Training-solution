#include<stdio.h>
int main(){
    int a,r,n=0,temp;
    printf("Enter any number : ");
    scanf("%d",&a);
    temp=a;
    while (temp>0){
        r= temp%10;
        n=(n*10)+r;
        temp =  temp/10;
    }
    if(a==n){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
}