
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,min=INT_MAX,max1=INT_MIN,i,sum=0;
	cin >> n;										// Reading input from STDIN
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    for(i=0;i<n;i++)
    {
        if(min>a[i])
            min=a[i];
        if(max1<a[i])
            max1=a[i];
    }
    cout<<sum-max1<<" "<<sum-min;
}

