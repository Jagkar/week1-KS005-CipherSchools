#include <iostream>
using namespace std;
int main()
{
    int password;

    // do{
    //     cin>>password;
    // }while(password<999999);

    // cout << "Enter the password: ";
    // cin >> password;
    // // not if
    // while (password < 999999)
    // {
    //     cout << "the password does not meet the required condition, please enter the password again"<<endl;
    //     cin >> password;
    // }
    // cout << "The user has now entered a correct password";

    // 1>0 --> always true
    // int count;
    // while(1){//the condition in while ubtil true the loop will run
    //     cout<<"chocolates"<<endl;
    //     count++;
    //     if(count>100) break;
    // }

    int i;
    for ( i = 0; ; i++)
    {
        count<<i<<" ";
        if(i>100) break;// this statement gets executed when i is 101
    }
    
    return 0;
}