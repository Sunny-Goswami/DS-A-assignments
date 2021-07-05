#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();

        if (m*n != r*c)
            return mat;
        
        int p = 0, k = 0;
        vector<vector<int>> res(r, vector<int> (c));
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                res[p][k++] = mat[i][j]; 
                if (k >= c){
                    k = 0;
                    p++;
                }
            }
        }
        return res;
    }
};

int main() {

    return 0;
}
