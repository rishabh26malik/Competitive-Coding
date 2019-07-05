#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int n,i,j,t;
	cin >> n;
	vector<pair<int,int> > a; 
	for(i=0;i<n;i++)
	{
	    cin>>t;
	    a.push_back(make_pair(t,i));
	}
	sort(a.begin(), a.end());
	for(i=0;i<n;i++)
	    cout<<a[i].second<<" ";
	 }
