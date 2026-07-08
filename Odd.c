#include<stdio.h>
main(){
    int num;
    printf("Enter a  num:");
    scanf("%d",&num);
    if(num % 2 == 0){
        printf("Num is even");
    }
    else{
        printf("Num is odd");
    }
}