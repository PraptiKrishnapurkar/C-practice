#include<stdio.h>
 int main(){
    int dist, amt, t;
    printf("Enter distance: ");
    scanf("%d",&dist);
    if(dist > 0 && dist <= 20)
    {
        amt = 50;
    }
    else if (dist > 20 && dist <= 50)
    {
        t=dist-20;
        amt = 50 + (t * 9);
    }
    else if (dist > 50 && dist<= 100)
    {
        t=dist-50;
        amt = 50 + 270 + (t * 8);
    }
    else if (dist > 100)
    {
        t=dist-100;
        amt=50+270+400+(t * 7);
    }
    else{
        printf("Invalid dist");
        amt=0;
    }
    printf("%d",amt);
}