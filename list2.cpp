
#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
    int choice;
    int number;
    int d;
    list<int> l;
    list<int>:: iterator it;
    cout<<"Enter the list length "<<endl;
    cin>>choice;
    for(int i=0;i<choice;i++)
    {
        cout<<"Enter the first number : "<<i+1<<endl;
        cin>>number;
        l.push_back(number);
    }
    for(it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<"\t";
  }
    cout<<endl;
    cout<<"Enter the number that you want to delete : "<<endl;
    cin>>d;
    for(it=l.begin();it!=l.end();)
    {
        if((*it)==d)
        {
          it=l.erase(it);
        }
        else
        {
            it++;
        }
    }
    cout<<"The list after delete number : "<<endl;
    for(auto it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<"\t";
    }

 return 0;
}