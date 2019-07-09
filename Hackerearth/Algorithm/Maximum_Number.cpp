#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int cmp(string x, string y)
{
    string xy = x.append(y);
    string yx = y.append(x);
    return xy.compare(yx)>0 ? 1:0;
}


int main() {
	int n,i;
    cin>>n;
    int a[n];
    vector <string> str;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        str.push_back(to_string(a[i]));
    }
    sort(str.begin(),str.end(),cmp);

    for(i=0;i<str.size();i++)
        cout<<str[i];
       
}
