#include<stdio.h>
int main(){
  int n,fact=1;
  printf("Enter any number:");
  scanf("%d",&n);
  for(int i=n; i>0;i--){
    fact = fact*i;
  }
  printf("Factorial of %d is %d",n,fact);
}