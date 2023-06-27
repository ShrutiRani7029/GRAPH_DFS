#include<bits/stdc++.h>
using namespace std;
//const int N=1e5+10;
vector<int>g[15];

void dfs(int s,int d,int &count)
{
    if(s==d)
    {
         count++;
         return;
    }
    for(auto child:g[s])
        dfs(child,d,count);



}
int possiblepaths(vector<vector<int>>edges, int n, int source,int dest){

for(int i=0;i<edges.size();i++)
{
    g[edges[i][0]].push_back(edges[i][1]);
}
int count=0;
dfs(source,dest,count);
return count;


}

int main(){
int t;
cin>>t;
while(t--)
{

    int n,m,s,d;
    cin>>n>>m>>s>>d;
    vector<vector<int>>edges;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        edges.push_back({u,v});

    }
    int ans=possiblepaths(edges,n,s,d);
    cout<<ans<<endl;

}
return 0;

}
