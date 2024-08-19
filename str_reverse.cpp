#include<iostream>
#include<string.h>

using namespace std;

void reverse(string & ,int);

int main()
{
    string str;
    cout<<"Enter the string : \n";
    cin>>str;
    reverse(str,0);
    cout<<"The reverse is : "<<str;
    return 0;
}

void reverse(string &str , int i)
{
    if(i>(str.length()-i-1))
    {
        return;
    }
    swap(str[i],str[str.length()-i-1]);
    i++;
    reverse(str,i);
}