//in arrays we can not take values more than 10**8
//this is where map and unorder-map come into use
// in map we can take more than 10**8 values 
//suppose there is an array: 1 2 3 1 3 2 12
// in it, number is the key and its frequency is the value
//map <key, value>
// intially mpp[1]=0
// then it goes to 1 and incremented by 1. after every iteration, if the number is found, mpp[1]++
// in array, size is static but in ,maps size is dynamic

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    map<int , int> mpp;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mpp[arr[i]]++;
    } 

    //pre compute

    // iterate in the map
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
        //fetch
        cout<<mpp[number]<<endl;
    }
    return 0;
}