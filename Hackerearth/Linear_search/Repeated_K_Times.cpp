#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,i,k,prev,freq;
	cin >> n;										
	int a[n];
	for(i=0;i<n;i++)
	    cin>>a[i];
	sort(a,a+n);
	cin>>k;
	freq=1;
	prev=a[0];
	for(i=1;i<n;i++)
	{
	    if(freq==k)
	    {
	        cout<<a[i-1];
	        break;
	    }
	    if(a[i]==a[i-1])
	        freq++;
	    else
	    {
	        freq=1;
	    }
	}
	if(i==n)
	    cout<<a[n-1];
}

