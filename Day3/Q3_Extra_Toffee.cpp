#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxv = candies[0];
        for(int it: candies){
            if (maxv < it)
                maxv = it;
        }

        vector<bool> res;
        for(int it: candies){
            if ((it + extraCandies) >= maxv)
                res.push_back(true);
            else 
                res.push_back(false);
        }
        return res;
    }
};
int main() {
    
}