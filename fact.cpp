#include<iostream>
using namespace std;

int main()
{
 int i=1;
 int n , p=1;
cout<<"Enter the value : ";
cin>>n;
if(n<0)
{
 cout<<"Factorial of negative number is not possible";
 return 0;
}
while(i<=n)
{
/*
 1=1*1; p=1
 1=1*2; p=2
 2=2*3; p=6
 6=6*4; p=24
 24=24*5; p=24 */

 p=p*i;
  i++;
}
cout<<"value : "<<p;
return 0;
}