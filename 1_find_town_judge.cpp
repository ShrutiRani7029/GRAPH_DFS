#include<bits/stdc++.h>
using namespace std;
/*int find(int n,vector<vector<int>>trust)
{
    vector<pair<int,int>>arr(n+1,{0,0});
    for(int i=0;i<trust.size();i++)
    {
        arr[trust[i][0]].first+=1;
        arr[trust[i][1]].second+=1;

    }
    for(int i=1;i<=n;i++)
    {
        if(arr[i].first==0 && arr[i].second==n-1)return i;
    }
    return -1;
}*/
int find(int n,vector<vector<int>>trust)
{
vector<int> ans(n+1,0);
          for(int i=0; i<trust.size(); i++){///0, 1
                //cout<<trust[i][0]<<" "<<trust[i][1]<<endl;
             --ans[trust[i][0]];

             ++ans[trust[i][1]];
          }

         for(int i=1; i<=n ; i++)
         {//cout<<ans[i]<<endl;
             if(ans[i]==n-1) return i;
         }
         return -1;
}
int main()
{

    int n=3;
    vector<vector<int>>trust{{1,3},{2,3}};
    cout<<find(n,trust);
}
