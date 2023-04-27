#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,o=0,e=0,n;
    printf("Enter size of array ; ");
    scanf("%d",&n);
    int *arr = (int *)malloc(n*sizeof(int));
    printf("Enter elements of array : ");
    for(i=0; i<n ; i++){
        scanf("%d"&arr[i]);
    }
    for(i=0; i<n; i++){
        if(arr[i]%2==0){
            e++;
        }
        else{
            o++;
        }
    }
    printf("Numbers of odd are : %d and even are : %d",o,e);

}