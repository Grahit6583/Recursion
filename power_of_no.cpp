#include<iostream>

using namespace std;

int power(int , int);

int main()
{
    int base , expo;
    int ans;
    cout<<"Enter the no. and power : \n";
    cin>>base>>expo;
    ans = power(base,expo);
    cout<<"ans is : "<<ans;
    return 0;
}

int power(int base , int expo)
{
    // if(expo != 0)
    // {
    //     return base * power(base,expo-1);
    // }
    // else
    // {
    //     return 1;
    // }

    // =============optimized solution====================== //
    if(expo == 0)
    {
        return 1;
    }

    if(expo == 1)
    {
        return base;
    }

    int ans = power(base,expo/2);
    if(expo%2==0)
    {
        return ans*ans;
    }
    else if(expo%2 == 1)
    {
        return base*ans*ans;
    }
}