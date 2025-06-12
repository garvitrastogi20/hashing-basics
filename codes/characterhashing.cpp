// used when a string is given
// ASCII NUMBER OF LOWER CASE ELEMENTS: 97 to 122 where a=97 and z =122
//ASCII NUMBER OF UPPER CASE ELEMENTS: 65 to 90 where A=65 and Z=90


#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    //precompute
    int hash[256]={0};
    for(int i=0;i<s.size();i++)
    {
        hash[s[i]]++;
    }
    int q;
    cin>>q;
    while(q--) //Check the condition: Is q > 0?
    {
        char c;
        cin>>c;
        //fetch
        cout<<hash[c];
    }
    return 0;
}

//always use ch-'a' for lower case
//and ch-'a' for upper case

//s[i] auto cast itself to its integer value or ascii value
