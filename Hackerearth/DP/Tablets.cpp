
#include <iostream>

using namespace std;

int main() {
	int n,i,sum=0;
	cin >> n;
	int a[n],dp[n];
	for(i=0;i<n;i++){
	    cin>>a[i];
	    dp[i]=1;
	}
	for(i=1;i<n;i++)
	{
	    if(a[i]>a[i-1])
	        dp[i] = dp[i-1] + 1;
	}
	for(i=n-2;i>=0;i--)
	{
	    if(a[i]>a[i+1] && dp[i]<=dp[i+1])
	        dp[i]=dp[i+1]+1;
	}
	for(i=0;i<n;i++)
	    sum+=dp[i];
	cout<<sum;
}

