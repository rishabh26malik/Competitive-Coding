
#include <iostream>

using namespace std;

int main() {
	int n,i,k;
	cin >> n;
	// Reading input from STDIN
	int a[n];
	for(i=0;i<n;i++)
	    cin>>a[i];
	cin>>k;
	for(i=0;i<n;i++)
	{
	    if(a[i]==k)
	    {
	        cout<<i;
	        break;
	    }
	}
    
}
