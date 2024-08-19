#include<iostream>

using namespace std;

void quick_sort(int [],int,int);
int partition(int [],int,int);

int main()
{
    int n,i;
    cout<<"Enter thr size of the array : \n";
    cin>>n;
    int arr[n];
    cout<<"Enter the data in the array : \n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    quick_sort(arr,0,n-1);

    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

void quick_sort(int arr[] , int s ,int e)
{
    //base condition
    if(s>=e)
    {
        return ;
    }
    
    //partition 
    int pivot = partition(arr,s,e);

    //to sort left half
    quick_sort(arr,s,pivot-1);
    quick_sort(arr,pivot+1,e);
}

int partition(int arr[] ,int s , int e)
{
    int pivot = arr[s];
    int count = 0;

    int i,j;
    //to find swapping point
    for(i=s+1;i<=e;i++)
    {
        if(arr[i]<=pivot)
        {
            count++;
        }
    }
    //partition of the array
    int pivotindex = s+count;
    swap(arr[pivotindex],arr[s]);

    //sorting of the left and right part of the array
    i = s ;
    j = e ;
    while(i<pivotindex && j>pivotindex)
    {
        if(arr[i]<pivot)
        {
            i++;
        }
        
        if(arr[j]>pivot)
        {
            j--;
        }

        if(i<pivotindex && j>pivotindex)
        {
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotindex;
}