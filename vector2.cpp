#include<iostream>
#include<string>
#include<iomanip>
#include<vector>
#include<iterator>
using namespace std;
int main()
{

int n;
cout<<"Enter the size of numbers that you enter for sum ";
cin>>n;
cin.ignore();
vector<int> vec;
int input;
for(int i=0;i<n;i++)
{ 
 cout<<"Enter the number : "<<i+1<<endl;
 cin>>input;
 vec.push_back(input);
}


vector<int>::iterator it;
auto count=0;

for(it=vec.begin(); it!=vec.end();it++)
{
 count=count + (*it);
}
cout <<setw(20)<< "Sum: "<<count<<endl;  
cout<<endl;
return 0;
}
