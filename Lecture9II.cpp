
#include<iostream>
using namespace std;
// int compare(int a,int b) //comapre 2 integers and gives greatest
// {
//     // int c;
//     if(a>b){
//         // c=a;
//         return a;
//     }
//     else{
//         // c=b;
//         return b;
//     }
//     //now c will store the maximum of a,b
//     // return c;
// }
//guess the number
int compare(int a){
    if(a==5){
        return 1;
    }
    return 0;
}

// int sum(int a,int b){
//     int c;
//     c=a+b;
//     a=10;
//     b=11;
//     return c;
// }

// int sum(int a,int b);
int sum(int,int);
int main()
{
    // cout<<compare(3,5);
    // cout<<compare(5);
    int a,b;
    a=3;
    b=5;
    int c;
    cout<<a<<" "<<b<<endl;
    c=sum(a,b);
    cout<<c<<endl;
    cout<<a<<" "<<b<<endl;
    
    return 0;
}
int sum(int a,int b){
    return a+b;
}