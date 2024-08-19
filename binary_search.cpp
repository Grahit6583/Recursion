#include<iostream>

using namespace std; 

bool binary_Search(int [],int,int,int);

int main()
{
    int n,i,k,start,end,mid;
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
    start = 0;
    end = n-1;
    mid = start+(end-start)/2;
    bool ans = binary_Search(arr,k,start,end);
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

bool binary_Search(int arr[],int k,int start,int end)
{
    int mid = start+(end-start)/2;
    if(start>end)
    {
        return false;
    }
    if(arr[mid]==k)
    {
        return true;
    }
    else if(arr[mid]<k)
    {
        bool ans = binary_Search(arr,k,mid+1,end);
        return ans;
    }
    else if(arr[mid]>k)
    {
        bool ans = binary_Search(arr,k,start,end-1);
        return ans;
    }
}