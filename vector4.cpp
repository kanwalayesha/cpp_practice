#include<iostream>
#include<string>
#include<iomanip>
#include<vector>
#include<iterator>
using namespace std;
int main()
{

int n;
cout<<"Enter the size of numbers "<<endl;
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
auto smallest=vec[0];

for(it=vec.begin(); it!=vec.end();it++)
{
 if((*it)<smallest)
 {
  smallest=(*it);
 }
  
}

cout <<setw(20)<< "Smallest: "<<smallest<<endl;  
cout<<endl;

return 0;
}