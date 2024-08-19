#include<iostream>

using namespace std;

int factorial(int);

int main()
{
    int n;
    cout<<"Enter the number : \n";
    cin>>n;
    int ans = factorial(n);
    cout<<"ans is : "<<ans;
}

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*factorial(n-1);
}