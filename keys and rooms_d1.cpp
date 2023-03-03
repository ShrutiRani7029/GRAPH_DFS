class Solution {
public:
void dfs(int unlocked,vector<vector<int>>&rooms,int &numrooms,vector<int>&vis)
        {
            vis[unlocked]=1;
            numrooms++;
          for(auto nextroom:rooms[unlocked])
          {
              if(vis[nextroom])continue;
              dfs(nextroom,rooms,numrooms,vis);
          }
           
        }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        ///visited mark
        vector<int>visited(n,0);
        int numrooms=0;
        dfs(0,rooms,numrooms,visited);
        if(numrooms==n)return true;
        return false;
    }
};
