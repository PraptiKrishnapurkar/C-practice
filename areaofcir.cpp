// Area of Circle
#include<iostream>
using namespace std;
void area(int);
main(){
    int num;
    cout<<"Enter num: "<<endl;
    cin >> num;
    area(num);
    

}
void area(int r)
{
    int area= 3.14 * r *  r;
    cout<<"The area of circle is: "<<area;
}
