#include<iostream>
using namespace std;

int main(){

    int a = 5;
    cout<<sizeof(a)<<endl;

    char name = 'n';
    cout<<sizeof(name)<<endl;

    int num1 = 78;
    int num2 = 78;

    int nums;
    num1==num2? nums = true : nums = false;
    cout<<nums<<endl; // Output is true (1)

    int num3 = 67;
    int num4 = 78;

    int nums1;
    num3==num4? nums1 = true : nums1 = false;
    cout<<nums1<<endl; // Output is false (0)
    return 0;
}