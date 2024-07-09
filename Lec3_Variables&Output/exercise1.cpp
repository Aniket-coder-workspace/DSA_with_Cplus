#include<iostream>
using namespace std;

int main(){

    //program for adding 2 numbers. from 6 to 11
    int num1;
    int num2;
    cin>>num1;
    cin>>num2;
    cout<<"The addition of two number is: "<<num1+num2<<endl;

    //program for swapping value from 13 to 26
    int a,b;
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;

    int c;
    c = b;
    b = a;
    a = c;

    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;

    return 0;
}