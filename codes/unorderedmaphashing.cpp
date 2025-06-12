#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    unordered_map<int, int> mpp;
    // in unordered map, the difference is that it does not store values in sorted way
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mpp[arr[i]]++;
    }

    for(auto it: mpp)
    {
        cout<<it.first<<"->"<<it.second<<endl;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int number;
        cin>>number;
        cout<<mpp[number];
    }
    return 0;
} 
// the advantage of using unordered map is that it is having a less time complexity that is O(1)
// it goes to worst case O(N) due to internal collisons
