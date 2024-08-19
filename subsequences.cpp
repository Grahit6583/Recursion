#include<iostream>
#include<vector>
#include<stdlib.h>
#include<string.h>
#include<string>

using namespace std;

vector<string> subsequence(string);
void solve(string,string,int,vector<string>&);

int main()
{
    string temp;
    cout<<"Enter the string : \n";
    cin>>temp;
    vector<string>ans = subsequence(temp);
    int i;
    for(i=0 ; i<ans.size();i++)
    {
        cout<<"{ "<<ans[i]<<" } ";
    }
    return 0;
}

vector<string> subsequence(string temp)
{
    vector<string> ans;
    string output;
    int index = 0;
    solve(temp,output,index,ans);
    return ans;
}

void solve(string temp ,string output ,int index, vector<string>& ans)
{
    if(index>=temp.length())
    {
        if(output.length() > 0)
        {
            ans.push_back(output);
        }
        return ;
    }

    // exclude
    solve(temp,output,index+1,ans);

    // include
    char element = temp[index];
    output.push_back(element);
    solve(temp,output,index+1,ans);
}