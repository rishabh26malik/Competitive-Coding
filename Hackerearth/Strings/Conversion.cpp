#include <iostream>

using namespace std;

int main() {
	int t,i;
	string str,str2;
	cin>>t; 
	while(t>=0)
	{
	    str2="";
	    getline(cin,str);
	    i=0;
	    while(str[i]!='\0')
	    {
	        if(str[i]>=97 && str[i]<=122)
	            str2+=to_string(str[i]-96);
	        else if(str[i]>=65 && str[i]<=90)
	            str2+=to_string(str[i]-64);  
	        else
	            str2+='$';
	        i++;
	        
	    }
	    
	    cout<<str2<<endl;
	   t--;
	}
}
