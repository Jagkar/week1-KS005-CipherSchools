#include<iostream>
using namespace std;

int main()
{
    // int a,b,c,d,e;

    // cout<<"Give 5 integers as input"<<endl;
    // cin>>a>>b>>c>>d>>e;
    // cout<<"The integers in reverse order are"<<e<<d<<c<<b<<a;
    int a[10];
    int i;
    cout<<"Give 10 integers as input"<<endl;
    for (i = 0; i < 10; i++)
    {
        cin>>a[i];
    }
    
    cout<<"The 5 given input are: ";
    for (i = 9; i >=0; i--)
    {
        cout<<a[i];
    }
    return 0;
}