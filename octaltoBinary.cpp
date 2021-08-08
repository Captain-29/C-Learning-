#include<iostream>

using namespace std;
int main()
{
    int n,ans=0,x=1;
    cin>>n;
    while(x<=n)
    {
        x= x*8;
    }
    x=x/8;

    while(x>0)
    {
        int l= n/x;
        n=n-l*x;
        x/=8;
        ans = ans*10+l;
    }

    cout<<ans<<endl;
    return 0;

}