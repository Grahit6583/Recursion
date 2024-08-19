#include<iostream>
#include<vector>
#include<stdlib.h>

using namespace std;

vector<vector<int>> subset(vector<int>&);
void solve(vector<int> ,vector<int> ,int ,vector<vector<int>>&);

int main()
{
    int n,i,a,j;
    cout<<"Enter the no. of elements in the set : \n";
    cin>>n;
    vector<int> arr;
    cout<<"Enter the data : "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a;
        arr.push_back(a);
    }
    vector<vector<int>> ans = subset(arr);
    for(i=0;i<ans.size();i++)
    {
        for(j=0;j<ans[i].size();j++)
        {
            cout<<"{ "<<ans[i][j]<<" }";
        }
        cout<<"  ";
    }
}

vector<vector<int>> subset(vector<int>& arr)
{
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    solve(arr,output,index,ans);
    return ans;
}

void solve(vector<int> arr , vector<int> output , int index , vector<vector<int>>& ans)
{
    if(index>=arr.size())
    {
        ans.push_back(output);
        return ;
    }

    //exclude
    solve(arr,output,index+1,ans);

    //include
    int element = arr[index];
    output.push_back(element);
    solve(arr,output,index+1,ans);
}