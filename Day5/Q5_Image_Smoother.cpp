#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m = img.size();
        int n = img[0].size();

        int i = 0, j = 0;
        while(i<m){
            j = 0;
            int n1, n2, n3, n4, n5, n6, n7, n8, n9;
            while (j < n){
                int sum = 0;
                if (i == 0 && j == 0){
                    sum += img[0][0] + img[0][1] + img[1][0] + img[1][1];
                    img[0][0] = floor(sum/4);
                }
                




            }
        } 

    }
};

int main() {

    return 0;
}