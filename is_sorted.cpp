#include<iostream>

using namespace std;

bool isSorted(int [],int );

int main()
{
    int n,i;
    cout<<"Enter the size of the array : \n";
    cin>>n;
    int *arr = new int[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bool ans = isSorted(arr,n);
    if(ans)
    {
        cout<<"Array is sorted ";
    }
    else
    {
        cout<<"Array is not sorted";
    }
    return 0;
}

bool isSorted(int arr[] , int n)
{
    if(n==0 || n==1)
    {
        return true;
    }

    if(arr[0]>arr[1])
    {
        return false;
    }
    else
    {
        bool ans = isSorted(arr+1,n-1);
        cout<<" "<<n<<" ";
        cout<<arr[n];
        return ans;
    }
}