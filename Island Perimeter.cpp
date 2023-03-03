class Solution {
public:
int count=0;
void dfs(int i,int j,int n,int m, vector<vector<int>>&grid,int vis[][600])
{
    if(i<0 ||i>=n || j<0 || j>=m || grid[i][j]==0)
    {
        count++;
        return;
    }
    if(!vis[i][j])
    {
        vis[i][j]=1;
        dfs(i,j+1,n,m,grid,vis);
        dfs(i,j-1,n,m,grid,vis);
        dfs(i+1,j,n,m,grid,vis);
        dfs(i-1,j,n,m,grid,vis);
    }
}
    int islandPerimeter(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int vis[600][600];

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                vis[i][j]=0;
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]!=0 && vis[i][j]==0)
                {
                    dfs(i,j,n,m,grid,vis);
                    //break;
                }
            }
        }
        return count;
    }
};
