#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
 int choice;
 cout<<"Enter the number : "<<endl;
 cin>>choice;
 int input;
 vector<int> vec;
 vector<int> ::reverse_iterator it;
 for(int i=0;i<choice;i++)
 {
 cout<<"Enter the value : "<<i+1<<" "<<endl;
 cin>>input;
 vec.push_back(input);
 }
 cout<<"Reverse of the array is : "<<endl;
 for(it=vec.rbegin();it!=vec.rend();it++)
 {
    cout<<(*it)<<"\t"<<endl;
 }

return 0;
}