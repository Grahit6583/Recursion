#include<iostream>
#include<vector>
#include<stdlib.h>
#include<string.h>
#include<string>

using namespace std;

vector<string> phone_keypad(string);
void solve(string,string,int,vector<string>&,string []);

int main()
{
    string digits;
    cout<<"Enter the string : \n";
    cin>>digits;
    vector<string>ans = phone_keypad(digits);
    int i;
    for(i=0 ; i<ans.size();i++)
    {
        cout<<"{ "<<ans[i]<<" } ";
    }
    return 0;
}

vector<string> phone_keypad(string digits)
{
    vector<string> ans;
    if(digits.length()==0)
    {
        return ans;
    }
    string output = "";
    int index = 0 ;
    string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    solve(digits,output,index,ans,mapping);
    return ans;
}

void solve(string digits,string output,int index,vector<string>& ans,string mapping[])
{
    if(index>=digits.length())
    {
        ans.push_back(output);
        return ;
    }
    int number = digits[index]-'0';
    string value = mapping[number];
    for(int i=0;i<value.length();i++)
    {
        output.push_back(value[i]);
        solve(digits,output,index+1,ans,mapping);
        output.pop_back();
    }
}