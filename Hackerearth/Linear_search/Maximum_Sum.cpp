#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
	long long int n,min=INT_MIN,i,neg=0,c=0,sum=0;
	cin >> n;
	long long int a[n];
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	    if(a[i]<0)
	    {
	        neg++;
	        if(min<a[i])
	            min=a[i];
	    }
	}
	if(neg==n)
	    cout<<min<<" 1";
	else
	{
	    for(i=0;i<n;i++)
	    {
	        if(a[i]>=0)
	        {
	            c++;
	            sum+=a[i];
	        }
	    }
	    cout<<sum<<" "<<c;
	}
}
