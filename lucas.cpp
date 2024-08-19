#include<iostream>

using namespace std;

int lucas (int);

int main()
{
    int n;
    cout<<"Enter the term : \n";
    cin>>n;
    int ans = lucas(n);
    cout<<"ans is : "<<ans;
    return 0;
}

int lucas (int n)
{
    if(n<=0)
    {
        return 0;
    }
    if(n == 1)
    {
        return 1;
    }
    return lucas(n-1)+lucas(n-2)+lucas(n-3);
}