#include<iostream>
using namespace std;

int main(){

    int num = 5;
    int p = num; // Output 5
    cout<<p<<endl;

    num+=5;
    cout<<num<<endl; // Output 10

    num-=3;
    cout<<num<<endl; // Output 7

    num/=8;
    cout<<num<<endl; // Output 0

    num%=6;
    cout<<num<<endl; // Output 0

    return 0;
}