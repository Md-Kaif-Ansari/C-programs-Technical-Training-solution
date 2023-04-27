#include<stdio.h>
int fibo(int n){
    if(n==0 || n==1) return n;
    return fibo(n-1)+fibo(n-2);
}
int main(){
  int n;
  printf("Enter any number:");
  scanf("%d",&n);
  printf("Fibonaci series is \n");
  for(int i=0;i<n; i++){
    printf("%d  ",fibo(i));
  }
}