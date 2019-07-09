#include<bits/stdc++.h>
#include <iostream>
#include <boost/algorithm/string.hpp> 
using namespace std;

int main() {
	int n,c=0,len;
	string str,var;
	cin>>n;
	unordered_map <string, int> hash;
	while(n)
	{
	    getline(cin,str);

	    len=str.find("=");
	    
	    var=str.substr(0,len+1);
	    if(hash.find(var)==hash.end())
	        hash[var]=1;
	    n--;
	    
	}
	for(auto i=hash.begin(); i!= hash.end();i++)
	    c++;
	cout<<c-1<<endl;
}
