#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t,i,len;
	string str;
	cin >> t;
    while(t--)
    {
        cin>>str;
        i=0;
        len=str.length();
        for(i=0;i<len-1;i++)
        {
            //cout<<abs(str[i]-str[i+1])<<" ";
            if((abs(str[i]-str[i+1])!=1) && abs(str[i]-str[i+1])!=25 )
            {
                cout<<"NO"<<endl;
                break;
            }
        }
        if(i==len-1)
            cout<<"YES"<<endl;
    }
}
