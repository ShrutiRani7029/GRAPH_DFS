class Solution {
public:
void dfs(int unlocked,vector<vector<int>>&rooms,vector<int>&vis)
        {
            vis[unlocked]=1;
            for(int i=0;i<rooms[unlocked].size();i++)
            {
            if(!vis[rooms[unlocked][i]])
            {
                dfs(rooms[unlocked][i],rooms,vis);
            }
            }
           
        }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        ///visited mark
        vector<int>visited(n,0);
        int numrooms=0;
        dfs(0,rooms,visited);
        for(int i=0;i<n;i++)
        {
            if(visited[i]==0)return false;
           
        }
        return true;
    }
};
