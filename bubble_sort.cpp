#include<iostream>

using namespace std;

void bubble_sort(int [],int);

int main()
{
    int n,i;
    int *arr = new int[n];
    cout<<"Enter the size of array : \n";
    cin>>n;
    cout<<"Enter the data in the array : \n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bubble_sort(arr,n);
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    delete []arr;
    return 0;
}

void bubble_sort(int arr[] , int n)
{
    if(n==0 || n==1)
    {
        return ;
    }
    for(int i =0 ;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }
    bubble_sort(arr,n-1);
}