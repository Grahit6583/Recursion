#include<iostream>

using namespace std;

int multiplication(int , int);

int main()
{
    int a,b;
    cout<<"Enter the number : \n";
    cin>>a>>b;
    int ans = multiplication(a,b);
    cout<<"ans is : "<<ans;
    return 0;
}

int multiplication(int a , int b)
{
    if(b != 0 )
    {
        return a + multiplication(a,b-1);
    }
    else
    {
        return 0;
    }
}