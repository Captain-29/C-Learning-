#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"Enter values";
    cin>>x>>y>>z;

    if (check(x,y,z))
    {
        cout<<"Pythagoras triplet";
    }
    else
    {
        cout<<"Not a Pythagoras triplet";
    }
    return 0;
}
 bool check(int x, int y,int z)
 {
     int a= max(x, max(y,z));
     int b,c;

     if(a==x)
     {
         b=y;
         c=z;
     }
     else if(a==y)
     {
         b=x;
         c=z;
     }
     else
     {
         b=x;
         c=y;
     }
     if (a*a == b*b + c*c)
         return true;
     else 
         return false;

 };