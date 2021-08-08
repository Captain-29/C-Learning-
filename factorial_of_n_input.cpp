#include<iostream>
using namespace std;
int main()
{
    int n,i,j,f=1;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n;i++)
    { 
        f=1;
        for(j=1;j<=a[i];j++)
        {
            f=f*j;
        }
        cout<<f<<endl;
    }

    
    return 0;
}