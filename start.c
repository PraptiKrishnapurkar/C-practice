#include<stdio.h>
main(){
    int start,end,i;
    printf("Enter Range: ");
    scanf("%d %d",&start,&end);
    for(i = start;i<=end;i++)
    {
        printf("\n%d",i);
    }
}