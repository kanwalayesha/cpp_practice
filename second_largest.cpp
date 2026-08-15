#include<iostream>
using namespace std; 
int main()
{
 int n;
cout<<"Enter number of students that appear in test"<<endl;
cin>>n;
int array[n];
for(int i =0 ;i<n;i++)
{
  cout<<"Enter marks of student "<<i+1<<": "<<endl;
  cin>>array[i];
}
int largest[n];
for (int j=0; j<n ;j++)
{
 if(array[j]>array[n])
{
 largest[n]=array[j];
}
}
cout<<"Largest Number : "<<endl;
cout<<largest[n-1];
return 0;
}