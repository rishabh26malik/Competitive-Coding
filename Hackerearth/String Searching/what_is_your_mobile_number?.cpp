#include <iostream>

using namespace std;

int main() {
	int i,t,c;
	string str,out;
	cin>>t;
	while(t)
	{
	    c=0;
	    cin>>str;
	    if(str[0]=='0' || str.length()!=10)
	    {
	        out="NO";
	    }
	    else
	    {
	        i=0;
	        while(str[i]!='\0')
	        {
	            if(str[i]>='0' && str[i]<='9')
	                c++;
	            i++;
	        }
	        if(c!=10)
	            out="NO";
	        else
	            out="YES";
	    }   
	    cout<<out<<endl;
	    t--;
	}
}

