#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    string str;
    int t,i;
    cin>>t;
    while(t--)
    {
        cin>>str;
        unordered_map <char, int> hash;
        i=0;
        while(str[i]!='\0')
        {
            if(hash.find(str[i])==hash.end())
            {
                cout<<str[i];
                hash[str[i]]++;
            }
            i++;
        }
        cout<<endl;
    }
}
