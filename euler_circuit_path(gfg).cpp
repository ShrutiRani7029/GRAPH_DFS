
#include<bits/stdc++.h>
using namespace std;

///undirected graph
///Euler path: visits every edge exactly once,
///Euler circuit: start==end

int graph(int v,vector<int>adj[])
{
    int count=0;
     ///3 conditions:
     for(int i=0;i<v;i++){
        int n=adj[i].size();///graph's size,
        ///if odd contains the increase the number of count,
        if(n%2!=0){
            count++;
        }
     }

     if(count==0)return 2;
     if(count==0 || count==2)return 1;

}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int v,e;
        cin>>v>>e;
        vector<int>adj[v];
        for(int i=0;i<e;i++)
        {
            int v1,v2;
            cin>>v1>>v2;
            adj[v1].push_back(v2);
            adj[v2].push_back(v1);
        }
        int ans=graph(v,adj);
        cout<<ans<<endl;
    }
    return 0;
}
