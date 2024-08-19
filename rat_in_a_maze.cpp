#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<string> find_path(vector<vector<int>>& , int);
void move(vector<vector<int>>&,int,vector<string>&,vector<vector<int>>&,string,int,int);
bool safe_move(vector<vector<int>>&,int,vector<vector<int>>&,int,int);

int main()
{
    int n,a,i,j;
    cout<<"Enter the size of the array : \n";
    cin>>n;
    cout<<"Enter the data in the array : \n";
    vector<vector<int>> m = {{1, 0, 0, 0},
                             {1, 1, 0, 1}, 
                             {1, 1, 0, 0},
                             {0, 1, 1, 1}};
    // for(i=0;i<n;i++)
    // {
    //     vector<int>temp;
    //     for(j=0;j<n;j++)
    //     {
    //         cin>>a;
    //         temp.push_back(a);
    //     }
    //     m.push_back(temp);
    // }
    cout<<"print : \n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<"\n";
    }
    vector<string> ans = find_path(m,n);
    for(i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}

vector<string> find_path(vector<vector<int>> & m ,int n)
{
    vector<string> ans;
    if(m[0][0] == 0)
    {
        return ans;
    }
    int srcx = 0;
    int srcy = 0;
    vector<vector<int>> visited = m;
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            visited[i][j] = 0; 
        }
    }

    string path = "";
    move(m,n,ans,visited,path,srcx,srcy);
    sort(ans.begin(),ans.end());
    return ans;
}

void move(vector<vector<int>>& m , int n,vector<string>& ans,vector<vector<int>>& visited,string path,int x,int y)
{
    if(x == n-1 && y == n-1)
    {
        ans.push_back(path);
        return ;
    }

    visited[x][y] = 1;

    //movement in down
    int newx = x+1;
    int newy = y;
    if(safe_move(m,n,visited,newx,newy))
    {
        path.push_back('D');
        move(m,n,ans,visited,path,newx,newy);
        path.pop_back();
    }
    //movement in left
    newx = x;
    newy = y-1;
    if(safe_move(m,n,visited,newx,newy))
    {
        path.push_back('L');
        move(m,n,ans,visited,path,newx,newy);
        path.pop_back();
    }
    //movement in right
    newx = x;
    newy = y+1;
    if(safe_move(m,n,visited,newx,newy))
    {
        path.push_back('R');
        move(m,n,ans,visited,path,newx,newy);
        path.pop_back();
    }
    //movement in up
    newx = x-1;
    newy = y;
    if(safe_move(m,n,visited,newx,newy))
    {
        path.push_back('U');
        move(m,n,ans,visited,path,newx,newy);
        path.pop_back();
    }
    visited[x][y] = 0;
}

bool safe_move(vector<vector<int>>& m,int n,vector<vector<int>>& visited,int x,int y)
{
    if((x>=0 && x<n) && (y >= 0 && y<n) && m[x][y] == 1 && visited[x][y] == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}