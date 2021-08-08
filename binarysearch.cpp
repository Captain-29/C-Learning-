#include<iostream>
using namespace std;
int main()
{
    int n,i,x;
    int arr[n];
    cout<<"Enter n";
    cin>>n;
    cout<<"Enter elements in array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter number to be search";
    cin>>x;

    int s=0;
    int e=n;

    while(s<=e)
    {
        int mid=(s+e)/2;

        if(arr[mid] == x)
        {
            cout<<arr[i];
        }
        else if(arr[mid]>x)
        {
            e = mid-1;
        }
        else{
            s =mid+1;
        }
    }
    cout<<"Not found";
    return 0;

}
