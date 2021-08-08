#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    int arr[10];
    cout<<"Enter N"<<endl;
    cin>>n;

    cout<<"Enter array elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];

    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}