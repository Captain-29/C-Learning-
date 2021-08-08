#include<iostream>
using namespace std;
int main()
{
    int n,i,count=0;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==0)
    {
        cout<<"Prime";
    }
    else
    {
        cout<<"Non-prime";
    }
    return 0;

}