#include<bits/stdc++.h>
using namespace std;

class Solution {
    bool checkElements(vector<vector<int>>& matrix, int j){
        int row = matrix.size();
        int cols = matrix[0].size();
      
        int i = 0;
        while ( i < row-1 && j < cols-1){
            if (matrix[i][j] != matrix[i+1][j+1])
                return false;
            i++;
            j++;
        }
        return true;
    }
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        
        int row = matrix.size();
        int cols = matrix[0].size();
        
        for(int i = row-2; i>0; i--){
            if (!checkElements(matrix, i))
                return false;
        }
        int j = 0;
        while(j < cols){
            if (!checkElements(matrix, j))
                return false;
            j++;
        }
        return true;
    }
// Solution
    // int row = matrix.size();
    //     int cols = matrix[0].size();
        
    //     for(int i=0; i<row; i++){
    //         for(int j=0; j<cols; j++){
    //             if (i>0 && j>0 && matrix[i-1][j-1]!=matrix[i][j]){
    //                 return false;
    //             }
    //         }
    //     }
    //     return true;
    // }
};

int main() {

    return 0;
}