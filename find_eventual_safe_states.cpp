#include<bits/stdc++.h>
using namespace std;


bool dfs(int vertex, vector<int>&vis, vector<int>&pathvis, vector<int>&safe, vector<vector<int>>&states){

cout<<vertex<<" ";
vis[vertex] = 1;
pathvis[vertex]=1;

for(auto it: states[vertex]){

    ///checking conditions
    if(!vis[it]){
        if(dfs(it,vis,pathvis,safe,states)){
            return true;
        }
    }
    else if(pathvis[it])return true;
}
safe[vertex]=1;
pathvis[vertex]=0;

return false;


}

vector<int>eventual(vector<vector<int>>&states){

int n=states.size();
vector<int>vis(n,0), pathvis(n,0), safe(n,0);

for(int i=0;i<n;i++){

    if(!vis[i]){
        dfs(i,vis,pathvis,safe,states);
    cout << "\n"
                 << "---" << endl;
    }

}
vector<int>ans;
for(int i=0;i<n;i++){

    if(safe[i])
    ans.push_back(i);
}
return ans;


}


int main(){

vector<vector<int>>states={{},{2,3},{4},{8},{5},{6},{4,7,9},{},{},{8,10},{}};
 auto ans=eventual(states);



}
