#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int t1=0,t2=1,i,temp;
    for(i=1;i<=n;i++)
    {
        cout<<t1<<endl;
        temp=t1+t2;
        t1=t2;
        t2=temp;

    }
    return 0;
}