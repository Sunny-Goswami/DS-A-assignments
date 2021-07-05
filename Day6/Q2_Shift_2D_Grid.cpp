#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int> gFlat;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[i].size(); j++){
                gFlat.push_back(grid[i][j]);
            }
        }

        k = k % (grid.size()*grid[0].size());
        int revpnt = gFlat.size()-k;

        // the value at right hand side in exclusive out of range
        // [ ) like this.
        reverse(gFlat.begin(), (gFlat.begin() + revpnt) );
        reverse((gFlat.begin() + revpnt), gFlat.end());
        reverse(gFlat.begin(), gFlat.end());

        int idx = 0;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[i].size(); j++){
                grid[i][j] = gFlat[idx++];
                
            }
            if (idx >= gFlat.size()); 
                break;
        }

        return grid;
    }
};
int main() {

    return 0;
}