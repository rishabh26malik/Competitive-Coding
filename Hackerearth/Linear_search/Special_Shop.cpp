#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	long long int t,n,a,b,min1,min2,y,x;
	cin >> t;
	while(t--)
	{
	    cin>>n>>a>>b;
	    x=b*n/(a+b);
	    y=n-x;
	    min1 = a*x*x + b*y*y;
	    x++;
	    y--;
	    min2 = a*x*x + b*y*y;
	    if(min1<min2)
	        cout<<min1<<endl;
	    else    
	        cout<<min2<<endl;
	}
}

