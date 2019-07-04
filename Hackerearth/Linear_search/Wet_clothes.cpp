
#include <iostream>

using namespace std;

int main() {
	int n,m,g,i,c=0,rain,j;
	cin>>n>>m>>g;
	int a[m],t[n];
	for(i=0;i<n;i++)
	    cin>>t[i];
	for(i=0;i<m;i++)
	    cin>>a[i];
	int picked[m]={0};
	for(i=1;i<n;i++)
	{
	    rain=t[i]-t[i-1];
	    for(j=0;j<m;j++)
	    {
	        if(a[j]<=rain && picked[j]==0)
	            picked[j]=1;
	    }
	}
	for(i=0;i<m;i++)
	    if(picked[i]==1)
	        c++;
	cout<<c;
	
}
