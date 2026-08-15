#include<iostream>
using namespace std; 




int main()
{
int n;
cout<<"Enter number of students that appear in test"<<endl;
cin>>n;
int marks[n];
int markss;
for(int i =0 ;i<n; i++)
{
  cout<<"Student marks of roll number "<<i+1<<" is : "<<endl;
  cin>>marks[i];
  markss=marks[i];
}
char choice;
cout<<"Do you want to search marks Y/N ";
cin>>choice;
if(choice=='y' || choice=='Y')
{
 int search;
 cout<<"What marks do you want to search in list : ";
 cin>>search;
 for (int j=0; j<n ;j++)
{
 if(search == marks[j])
{
 cout<<"Marks in list and Student roll no is : "<<j+1;
 exit(0);
}
 else
{
 cout<<"not found"<<endl;
}
}
}
return 0;
}
