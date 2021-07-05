#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<vector<int>> res(n, vector<int> (m));

        int p = 0, k = 0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                
                res[p++][k] = matrix[i][j];
                
                if (p >= n) {
                    p = 0;
                    k++;
                }
            }
        }

        return res;
    }
};
int main() {

    return 0;
}
