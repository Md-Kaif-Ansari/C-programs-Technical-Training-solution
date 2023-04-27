#include<stdio.h>
int main(){
  int n,i;
  printf("Enter any number:");
  scanf("%d",&n);
  for( i=2; i<=n/2; i++){
    if(n%1==0){
        break;
    }
  }
  if(i>n/2){
    printf("Prime no");
  }
  else{
    printf("Not Prime");
  }
}