// take something return something
// #include<iostream>
// using namespace std;
// void rev(int n) {
//     int r = 0;

//     while(n > 0) {
//         r = r * 10 + n % 10;
//         n = n / 10;
//     }

//     cout << r;
// }

// int main() {
//     int n;
//     cin >> n;
//     rev(n);
// }
#include <iostream>
using namespace std;

int rev(int n) {
    int r = 0;

    while(n > 0) {
        r = r * 10 + n % 10;
        n = n / 10;
    }

    return r;
}

int main() {
    int n;
    cin >> n;

    cout << rev(n);

    return 0;
}
#include<iostream>
using namespace std;
int rev(int);
main(){
    int num,ans;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    ans=rev(num);
    cout<<"The reverse of number is: "<<ans<<endl;
}
int rev(int a){
    int t1,t2,t3,rev;
    t1 = a%10;
    a=a/10;
}