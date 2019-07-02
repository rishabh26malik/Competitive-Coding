#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int num,i,x,t;
	int dp[1000001];
	memset(dp, INT_MAX , sizeof(dp));
	dp[0]=-1;
	dp[1]=-1;
	dp[2]=1;
	dp[3]=1;
	dp[4]=2;
	dp[5]=1;
	dp[6]=2;
	dp[7]=1;
	dp[8]=2;
	dp[9]=2;
	dp[10]=2;
	for(i=11;i<=1000000;i++)
	{   
	    if(dp[i-2]!=INT_MAX)
    	    x=dp[i-2];
	    if(dp[i-3]!=INT_MAX && x>dp[i-3])
	        x=dp[i-3];
	    if(dp[i-5]!=INT_MAX && x>dp[i-5])
    	    x=dp[i-5];
	    if(dp[i-7]!=INT_MAX && x>dp[i-7])
	        x=dp[i-7];
	    //dp[i]=min(dp[i],1+dp[i-7]);
	    dp[i]=1+x;
	}
	
	cin>>t;
	while(t--)
	{
	    cin>>num;
	    if(dp[i]!=INT_MAX)
    	    cout<<dp[num]<<endl;
	    else
	        cout<<-1<<endl;
	}
}

