

#include <iostream>

using namespace std;

int main() {
	int n,c=0;
	double a,b;
	cin >> n;
	while(n--)
	{
	    cin>>a>>b;
	    if(a/b <= 1.7 && a/b>=1.6)
	        c++;
	    else if(b/a <= 1.7 && b/a>=1.6)
	        c++;
	}
	cout<<c;
}
