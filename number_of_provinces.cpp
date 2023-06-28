#include<bits/stdc++.h>
using namespace std;


void dfs(int s,int n,vector<int>&vis,vector<vector<int>>&grid){

//condition;
vis[s]=1;
for(int i=0;i<n;i++){

    if(grid[i][s]==1 && vis[i]==0 && i!=s)///because of this condition we are able to find count of components present.
    {
        dfs(i,n,vis,grid);
    }
}

}


int hello(vector<vector<int>>&comp){
int n=comp.size();

vector<int>vis(n,0);
for(int i=0;i<n;i++)
{
    vis[i]=0;
}

int count=0;
for(int i=0;i<n;i++){
    if(vis[i]!=1){
        dfs(i,n,vis,comp);
        count++;
    }
}
return count;

}

int main(){

int n;
cin>>n;

vector<vector<int>>isconnected(n,vector<int>(n,0));

///matrices,

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
    {
        cin>>isconnected[i][j];
    }
}

int num=hello(isconnected);

cout<<"number of provinces : "<<num<<endl;

return 0;

}
