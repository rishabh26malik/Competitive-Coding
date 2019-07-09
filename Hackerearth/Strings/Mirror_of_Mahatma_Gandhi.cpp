#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
	int n,flag,zero,one,eight,i;
	cin >> n;
	string str,tmp;
	while(n)
	{
	    cin>>str;
	    tmp=str;
	    flag=0;
	    reverse(tmp.begin(),tmp.end());
	    if(tmp==str)
	    {
	        i=0;
	        zero=one=eight=0;
	        while(str[i]!='\0')
	        {
	            if(str[i]=='1')
	                one++;
	            else if(str[i]=='0')
	                zero++;
	            else if(str[i]=='8')
	                eight++;
	            i++;
	        }
	        if(one+zero+eight == str.length())
	        {
	            flag=1;
	        }
	    }
	    if(flag==1)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	    n--;
	}
}
