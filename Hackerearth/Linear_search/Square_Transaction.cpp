
#include <iostream>

using namespace std;

int main() {
	int n,sum,i,k,q,flag;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++)
	    cin>>a[i];
	cin>>q;
	while(q--)
	{
	    flag=0;
	    sum=0;
	    cin>>k;
	    for(i=0;i<n;i++)
	    {
	        sum+=a[i];
	        if(sum>=k)
	        {
	            cout<<i+1<<endl;
	            flag=1;
	            break;
	        }
	    }
	    if(flag==0)
	        cout<<-1<<endl;
	}
}
