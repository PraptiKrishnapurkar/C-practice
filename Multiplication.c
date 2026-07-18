#include<stdio.h>
main(){
    int num,i=1,n;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(i<=10)
    {
        n=num*i;
        printf("\n%d * %d = %d",num,i,n);
        i++;
    }
}