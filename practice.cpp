#include<iostream>
#include<cmath>
using namespace std;
int main()
{

int num;

cout<<"Enter the number : ";
cin>>num;

int original=num;
int digit;
int sum=0;


//check armstrong number or not
while(num>0)
{
digit=num%10; //get last digit .original=3
sum=sum+(digit*digit*digit); //saqure of original value 3=9
num=num/10; //remove last digit from stack now num value 15.3 and it ignore 
}



string result=(original==sum)? "its Armstrong value": "not Armstrong value";
cout<<result<<" :"<<sum<<"  original value : "<<original;
return 0;
}