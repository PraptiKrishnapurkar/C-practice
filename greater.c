#include<stdio.h>
main(){
    int a,b;
    printf("Enter a two digit num: ");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("a is greater");
    }
    else{
        printf("b is greater");
    }
}