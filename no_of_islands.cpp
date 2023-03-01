#include<bits/stdc++.h>
using namespace std;
void dfs(int r,int c,int n,int m, vector<vector<char>>&grid,int vis[][500])
{
    if(r<0 || c<0 || r>=n || c>=m || grid[r][c]=='0')return;
    if(!vis[r][c])
    {
        vis[r][c]=1;
        dfs(r+1,c,n,m,grid,vis);
        dfs(r-1,c,n,m,grid,vis);
        dfs(r,c+1,n,m,grid,vis);
        dfs(r,c-1,n,m,grid,vis);
    }
}
int island(vector<vector<char>>&grid)
{
    int n=grid.size();
    int m=grid[0].size();
    int vis[500][500];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            vis[i][j]=0;
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]!=0 && vis[i][j]==0)
                {
                    dfs(i,j,n,m,grid,vis);
                    count++;
                }
            }
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<vector<char>>grid(n,vector<char>(m,'#'));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>grid[i][j];
            }
        }
        int ans=island(grid);
        cout<<ans<<"\n";
    }
}
