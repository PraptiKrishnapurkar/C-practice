#include<stdio.h>
main(){
    int a[10],i;
    printf("Enter 10 num: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nMy array is \n");
    for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
}