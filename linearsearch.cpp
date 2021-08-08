#include<iostream>
using namespace std;
int main()
{
    int n,i,x;
    int arr[n];
    cout<<"Enter n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter number "<<endl;
    cin>>x;

    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            cout<<arr[i];
        }
        return -1;
    }
    
return 0;

}