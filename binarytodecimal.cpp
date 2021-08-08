#include<iostream>
using namespace std;
int main()
{
    int n,ans=0,x=1,y;
    cout<<"Enter binary"<<endl;
    cin>>n;
    while(n>0)
    {
        y=n%10;
        ans=ans + x * y;
        x*=2;
        n=n/10;
    }
    cout<<ans;
    return 0;
}