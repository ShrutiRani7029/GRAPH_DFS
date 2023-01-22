#include<bits/stdc++.h>
using namespace std;
//const int N=1e5+10;
//vector<int>adj[N];

bool dfs(vector<int>&visited,vector<int>adj[],int src,int v,bool &check)
{
    for(auto x:adj[src])
    {
        if(visited[x]!=-1)
        {
            if(visited[x]==visited[src])
            {
                check=false;
                return false;
            }
        }
        else{
            if(visited[src]==0)
                visited[x]=1;
            else visited[x]=0;
            dfs(visited,adj,x,v,check);

        }
    }
    return check;
}

bool isBipartite(int v,vector<int>adj[]){
    vector<int>visited(v,-1);
    for(int i=0;i<v;i++)
    {
        if(visited[i]==-1)
        {
            visited[i]=0;
            bool check=true;
            if(dfs(visited,adj,i,v,check)==false)return false;
        }
    }
    return true;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int v,e;
    cin>>v>>e;
    vector<int>adj[v];
    for(int i=0;i<e;i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    bool ans=isBipartite(v,adj);
    if(ans)cout<<"1\n"<<endl;
    else cout<<"0\n"<<endl;
    }
}

