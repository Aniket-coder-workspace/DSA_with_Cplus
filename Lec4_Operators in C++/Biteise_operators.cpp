#include<iostream>
using namespace std;

int main(){

    int a = 5;

    cout<<(a<<1)<<endl; // after multiplied by 2 output 10
    cout<<(a>>1)<<endl; // after dividing by 2 output 2

    int b = 8;
    cout<<(a&b)<<endl;
    cout<<(a|b)<<endl;
    return 0;
}