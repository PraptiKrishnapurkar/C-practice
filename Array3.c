#include<stdio.h>
main(){
    int a[10],i,sum=0;
    printf("Enter 10 num: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
        printf("%d\n",sum);
    
}