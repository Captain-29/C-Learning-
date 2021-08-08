#include<iostream>
using namespace std;
int main()
{
    int n,r,ans,i,f=1,f1=1,f3=1,d=0;
    cin>>n >> r;
    
    for(i=1;i<=n;i++)
    {
        f=f*i;

    }
    for(i=1;i<=r;i++)
    {
        f1=f1*i;
        
    }
    d=n-r;
    for(i=1;i<=d;i++)
    {
        f3=f3*i;
        
    }

    ans=f/(f1*f3);
    cout<<ans;
    return 0;

}