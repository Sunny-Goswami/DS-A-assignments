#include<bits/stdc++.h>
using namespace std;

class Solution {
    void dfs(vector<vector<int>>& image, int sr, int sc, int newColor){
        if (sr < 0 || sc < 0)
            return;
        
        int row = image.size();
        int col = image[0].size();
        
        int val = image[sr][sc];
        if (image[sr][sc] == val){
            image[sr][sc] = newColor;
        
            // Top element check
            if (sr > 0 && image[sr-1][sc] == val)
                dfs(image, sr-1, sc, newColor);
            
            // Bottom element check 
            if (sr < row-1 && image[sr+1][sc] == val)
                dfs(image, sr+1, sc, newColor);            
            
            // left element check
            if (sc > 0 && image[sr][sc-1] == val)
                dfs(image, sr, sc-1, newColor);                        
            // Right element check 
            if (sc < col-1 && image[sr][sc+1] == val)
                dfs(image, sr, sc+1, newColor);                        
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image.size() && image[sr][sc] != newColor){
            dfs(image, sr, sc, newColor);
        }      
        return image;
    }             
};

int main() {

    return 0;
}