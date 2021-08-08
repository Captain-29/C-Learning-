#include<iostream>
using namespace std;
int main()
{
    int a,b,ans=0,pc=0,rev=0,ld;
    cout<<"Enter two binary";
    cin>>a>>b;
    
    while(a>0 && b>0)
    {
        if(a%2==0 && b%2==0)
        {
            ans= ans*10+pc;
            pc=0;
        }
        else if((a%2==0 && b%2==1) || (a%2==1 && b%2==0 ))
        {
            if(pc==1)
            {
                ans=ans*10+0;
                pc=1;
            }
            else
            {
                ans=ans*10+1;
                pc=0;
        
            }

        }
        else
        {
            ans=ans*10+pc;
            pc=1;
        }
        a/=10;
        b/=10;
    }

    while(a>0)
    {
        if(pc==1)
        {
            if(a%2==1)
            {
                ans=ans*10+0;
                pc=1;
            }
            else
            {
                ans=ans*10+1;
                pc=0;
            }
        }
        else
        {
            ans=ans*10+(a%2);

        }
        a/=10;
    }

    while(b>0)
    {
        if(pc==1)
        {
            if(b%2==1)
            {
                ans=ans*10+0;
                pc=1;
            }
            else
            {
                ans=ans*10+1;
                pc=0;

            }
        }
        else
        {
            ans=ans*10+(b%2);

        }
        b/=10;
    }

    if(pc==1)
    {
        ans=ans*10+1;
    }
    

    while(ans>0)
    {
        ld=ans%10;
        rev=rev*10+ld;
        ans/=10;
    }
    cout<<ans<<endl;
    return 0;

}



