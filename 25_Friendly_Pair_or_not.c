#include<stdio.h>
int getDivisorsSum(int num){
    
    int sum = 0;
    
    for(int i = 1; i <= num/2; i++){
        if(num % i == 0)
            sum = sum + i;
    }
    return sum;
}

int main(){
    int i, a, b, sum1=0, sum2 =0;
    printf("Enter two number : ");
    scanf("%d %d",&a,&b);

    sum1 = getDivisorsSum(a);
    sum2 = getDivisorsSum(b);

    if(sum1/a == sum2/b){
        printf("%d and %d are Friendly pair Numbers",a,b);
    }
    else{
        printf("%d and %d are not Friendly pair Numbers ",a,b);
    }
}