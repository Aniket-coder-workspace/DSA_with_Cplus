#include<iostream>
using namespace std;

int main(){

    int num1 = 5;
    int num2 = 8;

    cout<<num1 + num2<<endl; // 13
    cout<<num1 - num2<<endl; // -3
    cout<<num1 * num2<<endl; // 40
    cout<<num1 / num2<<endl; // 0
    cout<<num1 % num2<<endl; // 5

    // increment operator
    cout<<num1++<<endl; // 5
    cout<<num2++<<endl; // 8

    // decrement operator
    cout<<num1--<<endl; // 6
    cout<<num2--<<endl; // 9
    
    return 0;
}