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
 vector<int> ::iterator it;
 for(int i=0;i<choice;i++)
 {
 cout<<"Enter the value : "<<i+1<<" "<<endl;
 cin>>input;
 vec.push_back(input);
 }
 cout<<"Removed 20 occurrences: "<<endl;
 for(it=vec.begin();it!=vec.end();it++)
 {
    if((*it)==20)
    {
        vec.erase(it);
    }
 }
 for(it=vec.begin();it!=vec.end();it++)
 {
    cout<<(*it)<<"\t"<<endl;
 }

return 0;
}