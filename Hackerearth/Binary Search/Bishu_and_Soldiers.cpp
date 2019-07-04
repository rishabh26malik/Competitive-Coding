#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
	int n,i,sum,m,q,c;
	cin >> n;										// Reading input from STDIN
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    cin>>q;
    while(q--)
    {
        cin>>m;
        c=0;
        sum=0;
        for(i=0;i<n;i++)
        {
            if(a[i]<=m)
            {
                c++;
                sum+=a[i];
            }
        }
        cout<<c<<" "<<sum<<endl;
    }
    
}
