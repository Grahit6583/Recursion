#include<iostream>

using namespace std;

void print(int);

int main()
{
    int num;
    cout<<"Enter the number : \n";
    cin>>num;
    print(num);
    return 0;
}

void print(int num)
{
    if(num == 0)
    {
        return;
    }
    cout<<num<<" ";
    print(num-1);
    cout<<endl;
    cout<<num<<" ";
}