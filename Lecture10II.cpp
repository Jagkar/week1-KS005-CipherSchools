#include<iostream>
using namespace std;

void PrintHi(){ //no parameters required
    cout<<"Hi"<<endl;
    return;
}

int sum(int a,int b){
    int c;
    c=a+b;
    a=500;
    cout<<"the value of c is "<<c<<endl;
    return c;
}

// void swap(int a, int b){
//     int c;
//     c=a;
//     a=b;
//     b=c;
//     cout<<"The values of a and b after swapping inside the function are: "<<a<<" "<<b<<endl;
//     return ;
// }

// reference
void swap(int &a, int &b){
    // by including the name & we are able to change actual parameters
    int c;
    c=a;
    a=b;
    b=c;
    cout<<"The values of a and b after swapping inside the function are: "<<a<<" "<<b<<endl;
    return ;
}

void func(int &a,int b){
    a=99999;
    b=99999;
    cout<<"The values of a and b inside func function are: "<<a<<" "<<b<<endl;
}

int main()
{
    PrintHi(); //first calling the printhi function
    int a,b;
    int c; //garbage value
    a=4;b=6;
    int d;
    // d=sum(a,b);
    // cout<<"The sum is equal "<<d<<' '<<a;
    c=75;
    // cout<<"the value of c is "<<c;
    // swap(a,b);
    // cout<<"The values of a and b after swapping outside the function are: "<<a<<" "<<b;
    cout<<"The values of a and b before func function are: "<<a<<" "<<b<<endl;
    func(a,b);
    cout<<"The values of a and b after func function are: "<<a<<" "<<b<<endl;
    return 0;
}