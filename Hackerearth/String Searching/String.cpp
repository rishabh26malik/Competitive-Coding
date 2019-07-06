#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int i,max1,n,c[26]={0};
	string str;
	cin>>n;
	cin>>str;
    i=0;
    while(str[i]!='\0')
    {
        c[str[i]-'a']++;
        i++;
    }
    max1=INT_MIN;
    
    for(i=0;i<26;i++)
        if(max1 < c[i])
        {
            max1=c[i];
          
        }
    //for(i=0;i<26;i++)
      //  cout<<c[i]<<" ";
    cout<<str.length()-max1<<endl;
}
