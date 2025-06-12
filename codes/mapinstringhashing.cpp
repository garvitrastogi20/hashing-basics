#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter string: ";
    getline(cin, s);
    int n=s.size();
    map<char ,int>mpp;
    for(int i=0;i<n;i++)
    {
        mpp[s[i]]++;
    }
    int q;
    cin>>q;
    while(q--)
    {
        char c;
        cin>>ws>>c;
        cout<<mpp[c];
    }
    return 0;
}