#include<iostream>
using namespace std;
int main()
{
    int n,i,curr=0;
    cout<<"Enter n";
    cin>> n;

    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    } 

    for(i=0;i<n;i++)
    {
        curr =0;
        for(int j=i;j<n;j++)
        {
            curr = curr + arr[j];
            cout<<curr<<" ";
        }
        cout<<endl;
    }
    return 0;
}