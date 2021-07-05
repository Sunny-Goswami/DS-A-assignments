#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        
        int row = matrix.size();
        int cols = matrix[0].size();
        
        for(int i=0; i<row; i++){
            for(int j=0; j<cols; j++){
                if (i>0 && j>0 && matrix[i-1][j-1]!=matrix[i][j]){
                    return false;
                }
            }
        }
        return true;
    }
};

int main() {

    return 0;
}