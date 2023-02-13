class Solution {
public:

    void dfs(int i,int j, int initial,int newcolor,vector<vector<int>>&img)
    {
        int n=img.size();
        int m=img[0].size();
        if(i<0 ||j<0)return;
        if(i>=n || j>=m)return;
        if(img[i][j]!=initial)return;
        img[i][j]=newcolor;
        dfs(i+1,j,initial,newcolor,img);
         dfs(i-1,j,initial,newcolor,img);
          dfs(i,j+1,initial,newcolor,img);
           dfs(i,j-1,initial,newcolor,img);

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int initialcolor=image[sr][sc];
        if(initialcolor!=color)
        dfs(sr,sc,initialcolor,color,image);
        return image;

    }
};
