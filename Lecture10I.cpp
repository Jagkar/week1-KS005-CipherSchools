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
int main()
{
    PrintHi(); //first calling the printhi function
    int a,b;
    int c; //garbage value
    a=4;b=6;
    int d;
    d=sum(a,b);
    // cout<<"The sum is equal "<<d<<' '<<a;
    c=75;
    cout<<"the value of c is "<<c;
    return 0;
}