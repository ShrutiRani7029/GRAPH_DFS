class Solution {
public:
void dfs(vector<vector<int>>& grid,int i,int j,int vis[][500],int n,int m,int &count)
{
    if(i<0 || j<0 || i>=n || j>=m || grid[i][j]!=2)return;
    grid[i][j]=2;
    count++;
    if(!vis[i][j])
    {
        vis[i][j]=1;
    dfs(grid,i+1,j,vis,n,m,count);
    dfs(grid,i-1,j,vis,n,m,count);
    dfs(grid,i,j+1,vis,n,m,count);
    dfs(grid,i,j-1,vis,n,m,count);
    }
}
    int orangesRotting(vector<vector<int>>& grid) {
        int count=0;
        int n=grid.size();
        int m=grid[0].size();
        int visited[500][500];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)visited[i][j]=0;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2 && !visited[i][j])
                {
                    dfs(grid,i,j,visited,n,m,count);
                }
            }
        }
        return count;

    }
