#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two number :");
    scanf("%d %d",&a,&b);
    printf(" Before Swapping a = %d and b = %d",a,b);
    a = a^b;
    b = a^b;
    a = a^b;
    printf("\n After Swapping a = %d and b = %d",a,b);
}