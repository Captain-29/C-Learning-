#include<iostream >
using namespace std;
int main()
{
    int n,i,key;
    cout<<"Enter N";
    cin>>n;

    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter key";
    cin>>key;

    for(i=0;i<n;i++)
    {
        if(arr[i] == key)
        {
            cout<<i;
        }
    }
    
    return 0;
}