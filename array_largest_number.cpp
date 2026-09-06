#include<iostream>
#include<vector>
using namespace std;
int main()
{
 int n;
cout<<"Enter the number of array size : "<<endl;
cin>>n;
vector<int> array(n);

for(int i=0;i<n;i++)
{
cout<<"Enter the numbers : "<<i+1<<endl;
cin>>array[i];
}
for(int i=0;i<n;i++)
{
cout<<array[i]<<" ";
}
cout<<endl;
int max=array[0];
for(int j=0;j<n;j++)
{
 if(array[j]>max)
{
 max=array[j];
}
}
cout<<"largest number in array is : "<<max<<endl;
return 0;
}