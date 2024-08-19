#include<iostream>

using namespace std;

int climb_stairs(int );

int main()
{
    int n;
    cout<<"Enter the number : \n";
    cin>>n;
    int ans = climb_stairs(n);
    cout<<"ans is : "<<ans;
    return 0;
}

int climb_stairs(int n)
{
    if(n<0)
    {
        return 0;
    }
    if(n==0)
    {
        return 1;
    }
    return climb_stairs(n-1)+climb_stairs(n-2);
}