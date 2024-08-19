#include<iostream>
#include<stdlib.h>

using namespace std;

void merge_sort(int [],int ,int);
void merge(int[],int,int);

int main()
{
    int n,i;
    int *arr = new int[n];
    system("CLS");
    cout<<"Enter the size of the array : \n";
    cin>>n;
    cout<<"Enter the data in the array : \n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    merge_sort(arr,0,n-1);
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    delete []arr;
    return 0;
}

void merge_sort(int arr[],int s , int e)
{
    if(s>e)
    {
        return ;
    }
    int mid = s+(e-s)/2;
    merge(arr,s,mid);
    merge(arr,mid+1,e);
    merge(arr,s,e);
}

void merge(int arr[],int s,int e)
{
    int mid = s+(e-s)/2;
    int len1 = mid-s+1;
    int len2 = e-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int mai = s;
    for(int i=0;i<len1;i++)
    {
        first[i] = arr[mai++];
    }
    mai = mid+1;
    for(int i=0;i<len2;i++)
    {
        second[i] = arr[mai++];
    }

    int index1 = 0;
    int index2 = 0;
    mai = s;
    while(index1<len1 && index2<len2)
    {
        if(first[index1]<second[index2])
        {
            arr[mai++] = first[index1++];
        }
        else
        {
            arr[mai++] = second[index2++];
        }
    }

    while(index1 < len1)
    {
        arr[mai++] = first[index1++];
    }
    
    while(index2 < len2)
    {
        arr[mai++] = second[index2++];
    }
}