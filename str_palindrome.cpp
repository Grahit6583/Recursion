#include<iostream>
#include<string.h>

using namespace std;

bool reverse(string  ,int);

int main()
{
    string str;
    cout<<"Enter the string : \n";
    cin>>str;
    bool ans = reverse(str,0);
    if(ans)
    {
        cout<<"palindrome";
    }
    else
    {
        cout<<"not palindrome";
    }
    return 0;
}

bool reverse(string str , int i)
{
    if(i>(str.length()-i-1))
    {
        return true;
    }

    if(str[i] != str[str.length()-i-1])
    {
        return false;
    }
    else
    {
        return reverse(str,i+1);
    }
}