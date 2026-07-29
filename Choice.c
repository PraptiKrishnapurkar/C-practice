#include<stdio.h>
int main(){
    char ch;
    int num,a,b,c,year;
    printf("\n A: Add two num");
    printf("\n B: Odd Even");
    printf("\n C: Leap or Not");
    printf("\nEnter Your Choice:");
    scanf(" %c",&ch);

    switch (ch)
    {
        case 'A' : printf("Enter Two num: ");
                   scanf("%d %d",&a,&b);
                   c=a+b;
                   printf("%d",c);
                   break;
        case 'B':  printf("Enter num: ");
                   scanf("%d",&num);
                   if(num%2==0){
                    printf("Even");
                   }
                   else{
                    printf("Odd");
                   }
                   break;
        case 'C':  printf("Enter Year: ");
                   scanf("%d",&year);
                   if(year%4==0){
                    printf("It is leap year");
                   }
                   else{
                    printf("Not a leap year");
                   }
                   break;
        default:
        printf("Invalid Input");           
    }
}