#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
	int i,flag;
	string line,str;
	while(getline(cin,line))
	{
	    i=0;
	    flag=0;
	    str="";
	    while(line[i]!='\0' )
	    {
	        if(flag==1)
	            str+=line[i]; 
	        else if(line[i]=='-' && line[i+1]=='>')
	        {
	            str+='.';
	            i++;
	        }
	        else if(line[i]=='/' && line[i+1]=='/')
	        {
	            flag=1;
	            str+=line[i];
	        }
	        else
	        {
	            str+=line[i];
	            
	        }
	        i++;
	    }
	    cout<<str<<endl;
	}
    
}

