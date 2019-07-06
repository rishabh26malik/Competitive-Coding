#include <iostream>

using namespace std;

int vowel(string str)
{
    int count=0,i=0;
    while(str[i]!='\0')
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' )
            count++;
        i++;
        
    }
   return count;
}

int main() {
    string str;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>str;
        cout<<vowel(str)<<endl;
    }
}
