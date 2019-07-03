#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int CountPS(char str[], int n) 
{ 
    int dp[n][n]; 
    memset(dp, 0, sizeof(dp)); 
    bool P[n][n]; 
    memset(P, false , sizeof(P)); 
    for (int i= 0; i< n; i++) 
        P[i][i] = true; 
  
    for (int i=0; i<n-1; i++) 
    { 
        if (str[i] == str[i+1]) 
        { 
            P[i][i+1] = true; 
            dp[i][i+1] = 1 ; 
        } 
    } 
  
    for (int gap=2 ; gap<n; gap++) 
    { 
        for (int i=0; i<n-gap; i++) 
        { 
            int j = gap + i; 
            if (str[i] == str[j] && P[i+1][j-1] ) 
                P[i][j] = true; 
            if (P[i][j] == true) 
                dp[i][j] = dp[i][j-1] + dp[i+1][j] + 1 - dp[i+1][j-1]; 
            else
                dp[i][j] = dp[i][j-1] + dp[i+1][j] - dp[i+1][j-1]; 
        
            
        } 
    } 
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            if(P[i][j])
                c++;
        
    }
    return c;
   
} 

int main() 
{
	string str;
	cin>>str;
	int n = str.length(); 
    char arr[n + 1]; 
	strcpy(arr, str.c_str());
	cout<<CountPS(arr,str.length())<<endl;
	/*
        2nd way bruteforce
        
    
  int j,i,len=str.length(),c,count=0;
	int left,right,flag;
	char sub[len]; 
	for(i=0;i<len;i++)
	{
		c=0;
		for(j=i;j<len;j++)
		{
			sub[c]=str[j];
			c++;
			sub[c]=0;
			left=0;
			right=c-1;
			flag=1;
			while(left<right)
			{
				if(sub[left]!=sub[right])
				{
					flag=0;
				}
				left++;
				right--;
			}
			if(flag==1 )
			{
				count =count+1;
			}
			//cout<<sub<<endl;
		}
	}*/

	return 0; 
} 
