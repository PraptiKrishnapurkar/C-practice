#include<stdio.h>
int main(){
    int unit,amt,t;
    printf("Enter Unit: ");
    scanf("%d",&unit);
    if(unit > 0 && unit <= 100)
    {
        amt = 3*unit;
    }
    else if(unit > 100 && unit <= 300)
    { 
        t=unit-100;
        amt=300+(t*4);

    }
    else if(unit > 300 && unit <= 600)
    {
        t=unit-300;
        amt= 300 + 800 + (t*5);

    }
    else if(unit > 600)
    {
        t=unit-600;
        amt=300 + 800 + 1500 + (t*6);
    }
    else
    {
        printf("Invalid Unit");
        amt =0;
    }
    printf("%d",amt);
}