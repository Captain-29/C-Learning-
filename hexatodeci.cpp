#include<iostream>

using namespace std;
int main()
{
    int n,ans=0,x=1;
    cin>>n;
    while(x<=n)
    {
        x= x*2;
    }
    x=x/2;

    while(x>0)
    {
        int l= n/x;
        n=n-l*x;
        x/=2;
        ans = ans*10+l;
    }

    cout<<ans<<endl;
    return 0;

}