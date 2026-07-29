#include<stdio.h>
main(){
    int num,count=0,i=2;
    printf("Enter a No: ");
    scanf("%d",&num);
    while(i<=num/2)
    {
        if(num%i==0)
        {
            count++;
        }
        i++;
    }
    printf("\n%d\n",count);
    if(count==0)
    {
        printf("No is prime");
    }
    else{
        printf("No is not prime");
    }
}
