#include<iostream>
using namespace std;

int main()
{
    int x,y,z;
    cout<<"Enter values"<<endl;
    cin>>x>>y>>z;

    pytha(x,y,z);
    
    return 0;

}

void pytha(int a,int b,int c)
{
    if(a>b && a>c)
    {
        if(a*a == b*b + c*c)
        {
            cout<<"Pythagoras Triplet";
        }
        else
        {
            cout<<"Not a Pythagoras Triplet";
        }
    }
    else if(b>c)
    {
        if(b*b == a*a + c*c)
        {
            cout<<"Pythagoras Triplet";
        }
        else
        {
            cout<<"Not a Pythagoras Triplet";
        }
    }
    else
    {
        if(c*c == b*b + a*a)
        {
            cout<<"Pythagoras Triplet";
        }
        else
        {
            cout<<"Not a Pythagoras Triplet";
        }

    }

}