#include<iostream>
using namespace std;
int main()
{
    int a,b;
    int c,d;
    cout<<"Input 4 Integers a,b,c and d"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    // statement: A>b
    cout<<(a>b)<<endl;
    // C++ interprets true as 1
    // C++ interprets true as 0
    // &&=and
    // ||=or
    cout<<(a>b && c>d)<<endl;
    cout<<(a>b || c>d)<<endl;
    return 0;
}