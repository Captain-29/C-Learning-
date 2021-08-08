#include<iostream>
using namespace std;
int main()
{
    int n,i,mx=-199999;

    cout<<"Enter N";
    cin>> n;
    int arr[n];
    cout<<"Enter elements in array";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"List of maximum of ith iteration is: "<<endl;
    for(i=0;i<n;i++)
    {
        mx = max(mx,arr[i]);
        cout<<mx<<endl;
    }
    return 0;
}