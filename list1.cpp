#include<iostream>
using namespace std;
#include<list>
#include<iterator>
int main()
{
    int choice;
    list<int> l;
    int number;
    list<int>:: iterator it;
    cout<<"Enter the number : "<<endl;
    cin>>choice;
   

    for (int i=0;i<choice;i++)
    {
     cout<<"Enter the number : "<<i+1<<endl;
     cin>>number;
     if(number%2==0)
     {
        l.push_back(number);
     }
     else
     {
        l.push_front(number);
     }

    }
    cout<<"list number"<<endl;

    for(it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<"\t";
    }
    return 0;
}