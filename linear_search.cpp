#include<iostream>

using namespace std; 

bool Linear_Search(int [],int,int);

int main()
{
    int n,i,k;
    cout<<"Enter the size of the array : \n";
    cin>>n;
    int arr[n];
    cout<<"Enter the data in the array : \n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the item to search : \n";
    cin>>k;
    bool ans = Linear_Search(arr,n,k);
    if(ans)
    {
        cout<<"Element is present ";
    }
    else
    {
        cout<<"Element is not present";
    }
    return 0;
}

bool Linear_Search(int arr[],int n , int k )
{
    if(n == 0)
    {
        return false;
    }

    if(arr[0]==k)
    {
        return true;
    }
    else
    {
        bool ans = Linear_Search(arr+1,n-1,k);
        return ans;
    }
}