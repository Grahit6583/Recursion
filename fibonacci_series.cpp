#include<iostream>
#include<stdlib.h>

using namespace std;

int fibo(int , int[]);

int main()
{
    int n;
    // int *arr = new int[n];
    system("CLS");
    cout<<"Enter the term : \n";
    cin>>n;
    int arr[n+1] = {0};
    int ans = fibo(n,arr);
    cout<<endl;
    cout<<"ans is : "<<ans;
    return 0;
}

int fibo(int n,int arr[])
{
    if(n==0 || n==1)
    {
        return n;
    }
    else if(arr[n] == 0)
    { 
        arr[n] = fibo(n-1,arr)+fibo(n-2,arr);
    }
    return arr[n];
}