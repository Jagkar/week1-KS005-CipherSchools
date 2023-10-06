#include <iostream>
using namespace std;
int main()
{
    int x; // variable x of int type , it can store a single ineger
    // array can be used to store multiple values in a single vaiable name
    // int a[5];
    // first element will have an index 0 -->a[0]
    // second element will have an index 0 -->a[1]
    // and goes till a[5]
    // cout << a[0];
    int a, b, c, d, e;

    cout << "Give 5 integers as input" << endl;
    cin>>a>>b>>c>>d>>e;
    cout << "The integers in reverse order are" << e << d << c << b << a;
    return 0;
}