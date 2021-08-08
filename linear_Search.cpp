#include<iostream>
using namespace std;
int main()
{
    int n,i,x;
    int arr[n];
    
    cout<<"Enter N";
    cin>>n;

    cout<<"Enter elements in array"<<endl;
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
        
    }
    cout<<"Not found";
    
    return 0;

}