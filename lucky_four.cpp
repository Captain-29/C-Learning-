#include<iostream>
using namespace std;

int main() {
	int n,i,rem,count;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	
	for(i=0;i<n;i++)
	{
		count=0;
	    while(a[i]>0)
	    {
	        rem=a[i]%10;
	        if(rem==4)
	        {
	            count++;
	        }
	        a[i]=a[i]/10;
	    }
	    cout<<count<<endl;
	}
	return 0;
}