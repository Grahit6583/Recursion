#include<iostream>
#include<stdlib.h>

using namespace std;

int getsum(int [] ,int);

int main()
{
    int n;
    cout<<"Enter the size of the array ";
    cin>>n;
    int *arr = new int[n];
    for(int i =0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    int ans = getsum(arr,n);
    cout<<"sum is : "<<ans;
    return 0;
}

int getsum(int arr[] , int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return arr[0];
    }
    // cout<<arr[0]<<" ";
    int sum = arr[0]+getsum(arr+1,n-1);
    return sum;
}