#include <iostream>
using namespace std;
int main()
{ 
    const int password=1234;
    cout<<"Enter the password"<<endl;
    int enterpassword;
    cin>>enterpassword;
    if(enterpassword==password)
    {
        cout<<"Access granted"<<endl;
    }
    else
    {
        cout<<"Access denied"<<endl;
        exit(0);
    }
    return 0;
}