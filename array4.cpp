/*Find the largest element in an array.
Find the smallest element.
Find the second largest element.
--------------Calculate the sum of all elements.
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
int count=0;
for(int i=0;i<n;i++)
{
 count=count+array[i];
}


cout<<"Array Sum is : "<<count<<endl;



return 0;
}