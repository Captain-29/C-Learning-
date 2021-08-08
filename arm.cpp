#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0,temp,r;
    cout<<"Enter a number"<<endl;
    cin>>n;
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum + (r*r*r);
        n=n/10;
    }
    if(sum==temp)
    {
        cout<<"Armstrong number";
    }
    else
    {
        cout<<"Not an armstrong number";
    }
    return 0;
}