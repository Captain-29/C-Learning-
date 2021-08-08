#include<iostream>
using namespace std;

void sum(int n)
{
    int i,x=0;
    for(i=1;i<=n;i++)
    {
        x= x+i;    
    }
    cout<<x<<endl;
    
}

int main()
{
    int n;
    cout<<"Enter N"<<endl;
    cin>>n;
    sum(n);
    
    return 0;
}