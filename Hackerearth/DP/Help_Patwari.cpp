
#include <iostream>

using namespace std;

int main() {
	int n,i;
	cin >> n;
	int a[n+1];
	a[0]=1;
	a[1]=1;
	a[2]=2;
	for(i=3;i<=n;i++)
	{
	    a[i]=(a[i-1]+a[i-2]) % 1000000007;
	}
	cout<<a[n-1];
}
