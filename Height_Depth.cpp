#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int>g[N];
int height[N], depth[N];


void dfs(int vertex,int parent){
    for(auto child:g[vertex])
    {
        ///for traversing each node of tree
        ///base condition: (leaf node)
        if(child==parent)continue;
        
        
        //depth
        depth[child]=depth[vertex]+1;
        dfs(child,vertex);/// dfs(vertex,parent) replaced to dfs(child,vertex),
        
        height[vertex]=max(height[vertex],height[child]+1);
    }
}

int main()
{
    //tree
    //undirected
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        int v1,v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
        
    }
    dfs(1,0);//here 1 as vertex and 0 as parent, 
    for(int i=1;i<=n;i++)
    {
        cout<<"Height : "<<height[i]<<" "<<"Depth : "<<depth[i]<<endl;
    }
    
}
