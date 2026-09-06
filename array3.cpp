/*Find the largest element in an array.
Find the smallest element.
-------------Find the second largest element.
Calculate the sum of all elements.
Calculate the average of array elements.
Count even and odd numbers.
Reverse an array.
Check if an array is sorted.
Search for an element using linear search.
Count how many times a given number occurs.*/
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
int second=array[0];
for(int j=0;j<n;j++)
{
 if(max>array[j] && second<array[j]) 
{
 second=array[j];
}
}

cout<<"largest number in array is : "<<max<<endl;
cout<<" Second largest number in array is : "<<second<<endl;


return 0;
}