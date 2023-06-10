#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int>g[N];
bool vis[N];
vector<int>medium;
vector<vector<int>>store;


void dfs(int vertex){
vis[vertex]=true;
medium.push_back(vertex);

for(int child:g[vertex]){
    if(!vis[child])dfs(child);
}

}

int main(){
int n,m;
  cin>>n>>m;
  for(int i=0;i<m;i++)
  {
    int v1,v2;
    cin>>v1>>v2;
    g[v1].push_back(v2);
    g[v2].push_back(v1);
  }

  for(int i=1;i<=n;i++)
  {
      if(!vis[i])
      {
          medium.clear();
          dfs(i);
          store.push_back(medium);

      }
  }

  for(auto it:store)
  {
      for(int vertex:it)
      {
          cout<<vertex<<" ";
      }
      cout<<endl;
  }

}
