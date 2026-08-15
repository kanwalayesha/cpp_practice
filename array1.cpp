#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the subject : ";
    cin>>n;
    int marks[n];
    int sum=0;
    float average;
    for(int i=0;i<n;i++)
    {   
        cout<<"Enter the marks of subject "<<i+1<<" : ";
        cin>>marks[i];
        sum=sum+marks[i];
        
    }
//find largest number
 int k=0 , largest=marks[0];
   while(k<n)
        {
            if(marks[k]>largest)
            {   
                largest=marks[k];
            }
           
            k++;
        }
    //find smallest marks
    int j=0;
    int smallest=marks[0];
    while(j<n)
    {
        if (marks[j]<smallest)
        {
            smallest=marks[j];
        }
    j++;
    }
    //count even marks
    int odd=marks[0],even=marks[0];
    int p=0;
    while(p<n)
    {
        if(marks[p]%2==0)
        {
            even=marks[p];
            cout<<"Even marks : "<<even<<endl;  
        }
        else
        {
            odd=marks[p];
            cout<<"odd marks : "<<odd<<endl;  
        }
        p++;
    }
              
    cout<<"The Smallest number is : "<<smallest<<endl;
    cout<<"The largest number is : "<<largest<<endl;
    average=(sum/n);
    cout<<"The total marks is : "<<sum<<"  /  "<<n*100<<endl;
    cout<<"The average marks is : "<<average<<endl;
    return 0;
}