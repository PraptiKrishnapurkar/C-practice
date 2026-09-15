// prime number
// take something return nothing
#include<iostream>
using namespace std;
void prime(int);
main(){
    int a;
    cout<<"Enter number: "<<endl;
    cin>>a;
    prime(a);
}
void prime(int num)
{
    int i,count=0;
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    cout<<count<<endl;
    if(count==0){
        cout<<"Number is prime"<<endl;
    }
    else
    {
        cout<<"Number is not prime"<<endl;
    }
}