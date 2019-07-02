
#include <iostream>

using namespace std;

int main() {
	int n,len,c,i;
	string str;
	cin >> str;
	len=str.length();
	int a[len]={0};
	i=len-1;
	n=str[len-1];
	if(n%2==0)
	    a[len-1]=1;
	else
	    a[len-1]=0;
	i=len-2;
	while(i>=0)
	{
	    n=str[i];
	    if(n%2==1)
	        a[i]=a[i+1];
	    else
	        a[i]=a[i+1]+1;
	    i--;
	}
	
	for(i=0;i<len;i++)
	    cout<<a[i]<<" ";
}

