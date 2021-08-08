#include<iostream>
using namespace std;
int main()
{
    int n,i,key;
    cout<<"Enter N"<<endl;
    cin>>n;

    int arr[n];

    cout<<"Enter elements in array";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];

    }

    cout<<"Enter key";
    cin>>key;

    int s=0;
    int e=n;

    for(s=0;s<e;s++)
    {
        int mid = (s+e)/2;

        if(key==arr[mid])
        {
            cout<<mid;
        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return 0;
}