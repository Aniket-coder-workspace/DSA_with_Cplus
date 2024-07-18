#include<iostream>
using namespace std;

int main(){

    cout<<"Hello Anee"<<endl;
    //Datatypes in C++
    int num = 56;
    char a = 'A';
    string name = "Aniket";
    bool value = true; // this can be (ture or false)
    float num1 = 45.78;
    double num2 = 45.848498;

    cout<<num<<endl;
    cout<<a<<endl;
    cout<<name<<endl;
    cout<<value<<endl;
    cout<<num1<<endl;
    cout<<num2<<endl;

    // Arithmetic operators in c++
    int num3 = 38;
    int num4 = 93;

    cout<<(num3 + num4)<<endl;
    cout<<(num3 - num4)<<endl;
    cout<<(num3 * num4)<<endl;
    cout<<(num3 / num4)<<endl;
    cout<<(num3 % num4)<<endl;

    // Relational operators in c++ 
    int b = 6;
    int c = 9;

    cout<<(b==c)<<endl; // output false 0
    cout<<(b!=c)<<endl; // output true 1
    cout<<(b>c)<<endl; // output false 0
    cout<<(b<c)<<endl; // output true 1
    cout<<(b>=c)<<endl; // output false 0
    cout<<(b<=c)<<endl; // output true 1

    // Logical operators in c++
    int d = 9;
    int f = 3;

    cout<<(d && f)<<endl;
    cout<<(d || f)<<endl;
    cout<<!d<<endl; // !d (!true) = false logical not creates false to true and 
    cout<<!f<<endl; // !d (!true) = false                       true to false 

    return 0;
}