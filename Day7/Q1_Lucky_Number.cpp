#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        vector<int> res;
        int j;
        for(int i=0; i<rows; i++){
            
            int min = INT_MAX;
            int pos = -1;
            for(j=0; j<cols; j++){
                if (min > matrix[i][j]){
                    min = matrix[i][j];
                    pos = j;
                }
            }

            int max = INT_MIN;
            for(j=0; j<rows; j++){
                if(max < matrix[j][pos])
                    max = matrix[j][pos];
            }
            
            if (min == max){
                res.push_back(min);
                return res;
            }
            
        }
        return res;
    }
};

int main() {

    return 0;
}