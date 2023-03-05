class Solution {
public:
void dfs(int s,int n,vector<int>&vis,vector<vector<int>>&grid)
{
    vis[s]=1;
    for(int i=0;i<n;i++)
    {
         if(grid[i][s]==1 && vis[i]==0 && i!=s)
         dfs(i,n,vis,grid);
    }
}
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        //int m=isConnected[0].size();

        vector<int> vis(n,0);

        for(int i=0;i<n;i++)
        {
            vis[i]=0;
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
          
                if(vis[i]!=1)
                {
                    dfs(i,n,vis,isConnected);
                    count++;
                }
        
        }
        return count;
    }
};
