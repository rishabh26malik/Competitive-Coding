 //Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int x,y,s,t;
	int i,j,c;
	cin>>x>>y>>s>>t;
	int a[t+1][t+1]={0};
	for(i=0;i<=t;i++)
	    a[i][0]=i;
	for(i=0;i<=t;i++)
	{
	    for(j=1;j<=t;j++)
	    {
	        if(i==0 && j==0)
	            a[i][j]=0;
	        a[i][j]=a[i][j-1]+1;
	        if(i>=x && j>=y && i<=x+s && j<=y+s && a[i][j]<=t)
	            c++;
	        //cout<<a[i][j]<<" ";
	    }
	    //cout<<endl;
	}
	if(t>0)
	cout<<c;
	else
	    cout<<0;
}
