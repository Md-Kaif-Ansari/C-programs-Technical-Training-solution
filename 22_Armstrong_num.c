#include<stdio.h>
int main(){
    int n,r,sum=0,c=0,p;
    printf("Enter any number: ");
    scanf("%d",&n);
    int temp = n;
    while(temp>0){
        temp = temp/10;
        c++;
    }
    temp = n;
    while(temp>0){
        r = temp%10;
        p=1;
        temp = temp/10;
        for(int i=0; i<c; i++){
            p = p * r;
        }
        sum += p;
        
    }
    if(sum == n){
        printf("Armstrong number");
        
    }
    else{
         printf("It is Not an Armstrong number");
    }
    
}