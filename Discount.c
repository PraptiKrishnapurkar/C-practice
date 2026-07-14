#include<stdio.h>
main(){
    float amt,disc,famt;
    printf("Enter Amount: ");
    scanf("%f",&amt);
    if(amt > 0 && amt <= 1000)
    {
        disc = amt * 0.02;
        famt=amt-disc;
    }
    else if(amt > 1000 && amt <= 10000)
    {
        disc = amt * 0.05;
        famt=amt-disc;
    }
    else if(amt > 10000 && amt <= 20000)
    {
        disc = amt * 0.08;
        famt=amt-disc;
    }
    else if(amt > 20000)
    {
        disc = amt * 0.10;
        famt=amt-disc;
    }
    else{
        disc=0;
        famt=amt;
        printf("Invalid amount");
    }
    printf("\n Amount=%f",amt);
    printf("\n Discount=%f",disc);
    printf("\n Final amount=%f",famt);
}