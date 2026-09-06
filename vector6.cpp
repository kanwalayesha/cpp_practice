#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;
     vector<int> vec;
    vector<int> :: iterator it;
    auto odd=0;
    auto even=0;
    int number;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter first number " <<i+1<<" : "<<endl;
        cin>>number;
        vec.push_back(number);
            }
    for(it=vec.begin();it!=vec.end();it++)
    {
         if((*it)%2==0)
         {
          even=even+1;
         }
         else
         {
            odd=odd+1;
         }

    }
    cout<<"odd numbers count : "<<odd<<endl;
    cout<<"even numbers count : "<<even<<endl;
    return 0;
}
