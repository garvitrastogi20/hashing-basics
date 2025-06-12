#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    //precompute
    int hash[13]={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]+=1;
    }

    int q;
    cin>>q;
    while(q>0)
    {
        int number;
        cin>>number;
        cout<<hash[number]<<endl;
    }
    return 0;
}
// if the array is size is very large let say 10 to the power 7
// then the array should be declared globally
// if not done, it will not work

// we can take upto 10**6 in the main function
// we can take upto 10**7 in global