#include<stdio.h>

int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int lcm(int a, int b){
    int g = gcd(a,b);
    return (a*b)/g;
}
int main(){
    int a,b;
    printf("Enter Two Numbers : ");
    scanf("%d %d",&a,&b);
    printf("LCM is %d ",lcm(a,b));
}
