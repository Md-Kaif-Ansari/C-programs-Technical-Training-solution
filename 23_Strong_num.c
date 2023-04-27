#include<stdio.h>
int fact(int n){
    if(n==0 || n==1) return n;
    return n * fact(n-1);
}
int main(){
    int r,n,temp,f,sum=0;
    printf("Enter any number : ");
    scanf("%d",&n);
    temp=n;
    while (temp>0){
        r= temp%10;
        f=fact(r);
        sum = sum + f;
        temp =  temp/10;
    }
    if(sum==n){
        printf("Strong Number");
    }
    else{
        printf("Not Strong Number");
    }
}