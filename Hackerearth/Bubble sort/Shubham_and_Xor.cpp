#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	long long int n,i,j,c=0,tot=0;
	cin >> n;
	long long int a[n];
	for(i=0;i<n;i++)
	    cin>>a[i];
	sort(a,a+n);
	for(i=0;i<n-1;i++)
	{
	    j=i+1;
	    while(j<n && a[j]==a[i])
	    {
	        c++;
	        j++;
	    }
	    tot+=(j-i)*(j-i-1)/2;
	    i=j-1;
	}
	cout<<tot;
}
