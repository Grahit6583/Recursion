#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> permutation(vector<int>&);
void solve(vector<vector<int>>&,int,vector<int> );

int main()
{
    int n,i,a,j;
    vector<int> nums;
    cout<<"Enter the size of the array : \n";
    cin>>n;
    cout<<"Enter the data in the array : \n";
    for(i=0;i<n;i++)
    {
        cin>>a;
        nums.push_back(a);
    }
    vector<vector<int>>ans = permutation(nums);
    cout<<ans.size()<<"\n";
    for(i=0;i<ans.size();i++)
    {
        cout<<ans[i].size()<<"\n";
        cout<<"{ ";
        for(j=0;j<ans[i].size();j++)
        {

            cout<<ans[i][j]<<" ";
        }
        cout<<"}";
    }
    return 0;
}

vector<vector<int>> permutation(vector<int>& nums)
{
    vector<vector<int>> ans;
    int index=0;
    solve(ans,index,nums);
    return ans;
}

void solve(vector<vector<int>>& ans , int index , vector<int> nums)
{
    if(index >= nums.size())
    {
        ans.push_back(nums);
        return ;
    }

    for(int j = index; j<nums.size(); j++)
    {
        swap(nums[index],nums[j]);
        solve(ans,index+1,nums);
        swap(nums[index],nums[j]);
    }
}