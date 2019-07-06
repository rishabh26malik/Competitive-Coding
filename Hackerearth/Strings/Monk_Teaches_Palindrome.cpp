#include <iostream>

using namespace std;

int pal(string str)
{
    int l=0,r=str.length()-1;
    while(l<=r)
    {
        if(str[l]!=str[r])
            return 0;
        l++;
        r--;
    }
    return 1;
}

int main() {
    string str,eo;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>str;
        if(str.length()%2)
            eo="ODD";
        else
            eo="EVEN";
        if(pal(str))
            cout<<"YES "<<eo<<endl;
        else
            cout<<"NO"<<endl;
    }
}
