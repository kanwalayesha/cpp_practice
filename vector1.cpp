#include<iostream>
#include<string>
#include<iomanip>
#include<vector>
#include<iterator>
using namespace std;
int main()
{

int n;
cout<<"Enter the number of person ";
cin>>n;
cin.ignore();
vector<string> vec;
string input;
for(int i=0;i<n;i++)
{ 
 cout<<"Enter the record of person : "<<i+1 <<" "<<endl;
 getline(cin,input);
 vec.push_back(input);
}
cout <<setw(20)<< "Records: ";  


vector<string>::iterator it;

for(it=vec.begin(); it!=vec.end();it++)
{
 cout<<*it<<"\t";
}

return 0;
}