class Solution {
public:

    void dfs(vector<vector<int>>& graph, vector<vector<int>>& ans,vector<int>&path,int src ){
     
      path.push_back(src);///path->0
      if(src==graph.size()-1)ans.push_back(path);
      else{
          for(auto it:graph[src]){
              dfs(graph,ans,path,it);
          }
      }
      path.pop_back();

    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>>ans;
        vector<int>path;

        dfs(graph,ans,path,0);
        return ans;
    }
};
