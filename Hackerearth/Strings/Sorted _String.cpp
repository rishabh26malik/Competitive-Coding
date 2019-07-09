#include <iostream>

using namespace std;

int main() {
	int t,i,j,k,n;
	cin >> t;
	string str;
	while(t)
	{
	    cin>>str;
	    n=str.length();
	    int c[26]={0};
	    for(i=0;i<n;i++)
	        c[str[i]-'a']++;
	    for(i=1;i<=100;i++)
	    {
	        for(j=0;j<26;j++)
	        {
	            if(c[j]==i)
	            {
	                for(k=0;k<i;k++)
	                    cout<<char(j+'a');
	            }
	        }
	    }
	    cout<<endl;
	    t--;
	}
}

