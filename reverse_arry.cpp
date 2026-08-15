#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int array1[n];

     for(int i =0;i<n;i++)
    {
        cout<<"Enter the number"<<endl;
        cin>>array1[i];
        
    }
     cout<<"Reverse number"<<endl;
    for(int j =n-1;j>=0;j--)
    {
        cout<<" "<<array1[j]<<"  ";
    }
   
   return 0;

}