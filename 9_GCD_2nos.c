#include<stdio.h>

int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b,a%b);

}
int main(){
    int a,b;
    printf("Enter Two Numbers : ");
    scanf("%d %d",&a,&b);
    printf("GCD is %d ",gcd(a,b));
}