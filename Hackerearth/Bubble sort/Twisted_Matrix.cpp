#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,k=0,i,j,l=0;
	cin >> n;
	int a[n][n],b[n*n];
	for(i=0;i<n;i++)
	    for(j=0;j<n;j++)
	    {
	        cin>>a[i][j];
	        b[k]=a[i][j];
	        k++;
	    }
	sort(b,b+n*n);
	
	int m=n;
    j=0;
	int r=0,c=n-1,row=n-1,col=n-1,rend=n-1,cstart=0;
	while(r<rend && cstart<=c)
	{
	    for(i=cstart;i<=col;i++)
	        a[r][i]=b[j++];
	    
	    r++;
	    for(i=r;i<=row;i++)
	        a[i][c]=b[j++];
	    c--;
	    
	    for(i=c;i>=cstart;i--)
	        a[rend][i]=b[j++];
	    rend--;
	    for(i=rend;i>=r;i--)
	        a[i][cstart]=b[j++];
	    cstart++;
	    
	}
	a[n/2][n/2]=b[n*n-1];
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
	        cout<<a[i][j]<<" ";
	    cout<<endl;
	}
}

