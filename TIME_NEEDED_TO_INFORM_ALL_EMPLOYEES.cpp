class Solution {
public:
    
 unordered_map<int,vector<int>>mp;
int ans=0;
int mx=0;
void dfs(int manager,vector<int>&informtime)
{
    mx=max(mx,ans); ///mx=max(0,0)=0
    for(auto employee:mp[manager])
    {
        ans+=informtime[manager];///3
        dfs(employee,informtime);
        ans-=informtime[manager];///2,1,0
        //max=3
    }
}
int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {



    for(int i=0;i<n;i++){

        int num=manager[i];
        if(num!=-1) ////means not the head one
        {
            mp[num].push_back(i);/// map-> 0,1,3,4,5
        }
    }

    
    dfs(headID,informTime); ///2, [0,0,1,0,0]
    return mx;
}
    
};

