/*Find the largest element in an array.
Find the smallest element.
Find the second largest element.
Calculate the sum of all elements.
Calculate the average of array elements.
Count even and odd numbers.
Reverse an array.
Check if an array is sorted.
---------------Check if an array is sorted in descending order.
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

for(int j=array.size()-1; j>=1 ;j--)
{
 if (array[j]>array[j-1])
{
 cout<<"Not sorted";
 return 0;
}
}
 cout<<" sorted"<<endl;

return 0;
}
