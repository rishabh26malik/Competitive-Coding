
#include <iostream>

using namespace std;

int main() {
	int i,t,flag,rem;
	int n;
	cin>>t;
	while(t--)
	{
	    flag=0;
	    cin>>n;
	    if(n%21==0)
	    {
	        cout<<"The streak is broken!"<<endl;
	           
	    }
	    else
	    {
    	    while(n>0)
    	    {
    	        rem=n%100;
    	        if(rem==21)
    	        {
    	            flag=1;
    	            //cout<<"The streak is broken!"<<endl;
    	            break;
    	        }
    	        n/=10;
    	    }
    	    if(flag==1)
	            cout<<"The streak is broken!"<<endl;
	        else
	            cout<<"The streak lives still in our heart!"<<endl;
	    }
	    
	}
}


