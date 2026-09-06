///Find the smallest element in an array.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
 int n; 
cout<<"Enter the number of array size"<<endl;
cin>>n; //5
vector<int> array(n); //array[5]
for(int i=0;i<n;i++)  //for(int i=0;i<5;i++)
{
cout<<"Enter the numbers : "<<i+1<<endl; //Enter the numbers : 1
cin>>array[i]; //array[0]=10
}
for(int i=0;i<n;i++) //for(int i=0;i<5;i++)
{
cout<<array[i]<<" "; //10 20 30 40 50
}
cout<<endl;
int min=array[0];
for(int j=0;j<n;j++)
{
 if(array[j]<min) 
{
 min=array[j]; 
}
}
cout<<"smallest number in array is : "<<min<<endl; //smallest number in array is : 10
return 0;
}
