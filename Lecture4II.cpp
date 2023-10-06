#include<iostream>
using namespace std;
int main()
{
    // int a,b;
    // int c,d;
    // cout<<"Input 4 Integers a,b,c and d"<<endl;
    // cin>>a;
    // cin>>b;
    // cin>>c;
    // cin>>d;
    // // statement: A>b
    // cout<<(a>b)<<endl;
    // // C++ interprets true as 1
    // // C++ interprets true as 0
    // // &&=and
    // // ||=or
    // cout<<(a>b && c>d)<<endl;
    // cout<<(a>b || c>d)<<endl;
    // float a,b;
    // cout<<"Give 2 floating point number as input";
    // cin>>a>>b;
    // //1 and 0 , first statement is true and seconf is false
    // if(a>0.01 && b>a){

    //     cout<<"The condition in if statement is correct";//will only be printed when condition in if is true
    // }
    // else{
    //     cout<<"The condition is false";
    // }


    // int marks;
    // cout<<"Student, please enter the marks to calculate the grade: ";
    // cin>>marks;
    // if(marks>90){
    //     cout<<"A";
    // }
    // else if(marks>80){
    //     cout<<"B";
    // }
    // // if(marks<90 && marks>80){
    // //     cout<<"B";
    // // }
    // if(marks>70){
    //     cout<<"C";
    // }
    // // else if(marks<80 && marks>70){
    // //     cout<<"C";
    // // }
    // else{
    //     cout<<"Pass";
    // }

    // int a,b,c;
    // cout<<"Give 3 integers as input a,b,c"<<endl;
    // cin>>a>>b>>c;
    // if(a>b && c>d){
    //     cout<<"haha";
    // }
    // else if(a>b && c<d){
    //     cout<<"hehe";
    // }
    // else if(a<b && c>d){
    //     cout<<"huhu";
    // }

    cout<<"enter a integer a";
    int a;
    cin>>a;
    switch (a)
    {
    case 1:
        cout<<"the value of a is 1";
        break;
    case 2:
        cout<<"the value of a is 2";
        break;
    case 3:
        cout<<"the value of a is 2";
    default:
    cout<<"default will be always printed";
        break;
    }
    return 0;
}