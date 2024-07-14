#include<iostream>
using namespace std;

int main(){
    cout<<"This is logical operators"<<endl;
    bool exp1 = true;
    bool exp2 = false;
    cout<<(exp1&&exp2)<<endl; // False
    cout<<(exp1&&exp2)<<endl; // False
    cout<<(!exp1)<<endl; // False
    cout<<(!exp2)<<endl; // True
    return 0;
}