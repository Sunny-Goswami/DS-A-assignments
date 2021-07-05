#include<bits/stdc++.h>
using namespace std;
class Solution {
    void reverse(vector<vector<int>>& image, int i){
        int left = 0, right = image[0].size()-1; 
        while (left <= right){
            swap(image[i][left], image[i][right]);
            left++;
            right--;
        }
    }
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int rows = image.size();
        int cols = image[0].size();
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                image[i][j] = 1^image[i][j];
            }
            reverse(image, i);
        }
        return image;
    }
};
int main() {

    return 0;
}