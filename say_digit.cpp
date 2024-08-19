#include<iostream>

using namespace std;

void say_digit(int , string []);

int main()
{
    int n;
    cout<<"Enter the number : \n";
    cin>>n;
    string arr[10] = {"ZERO","ONE","TWO","THREE","FOUR","FIVE",
    "SIX","SEVEN","EIGHT","NINE"};
    say_digit(n,arr);
    return 0;
}

void say_digit(int n , string arr[])
{
    if(n==0)
    {
        return;
    }
    int digit = n%10;
    n = n/10;
    say_digit(n,arr);
    cout<<arr[digit]<<" ";
}