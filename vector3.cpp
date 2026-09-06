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
auto largest=vec[0];

for(it=vec.begin(); it!=vec.end();it++)
{
 if((*it)>largest)
 {
  largest=(*it);
 }
  
}

cout <<setw(20)<< "Largest: "<<largest<<endl;  
cout<<endl;

return 0;
}