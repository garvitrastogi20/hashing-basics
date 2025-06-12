//HASHING:
//What is Hashing? -Hashing in data structures is a technique for efficiently storing and retrieving data.
// we use it to calculate frequencies
// a less efficient approach is brute force method
// brute force method is displayed below to count frequencies

#include<bits/stdc++.h>
using namespace std;
void f(int arr[], int n)
{
    int cnt=0;
    for(int i=0;i<10;i++)
    {
        if(arr[i]==n)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
int main()
{
    int arr[10]={1,2,5,6,2,4,5,2,3,3};
    cout<<"Array elements: ";
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    while(true)
    {
        int n;
        cout<<endl;
        cout<<"Enter the number's frequency you want to find: ";
        cin>>n;

        if(n<0)
        {
            cout<<"Exiting.."<<endl;
            break;
        }
        f(arr, n);
    }
}