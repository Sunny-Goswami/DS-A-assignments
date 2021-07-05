#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        int cnt[101] = {0};
        int sum = 0;

        for(int i=0; i<nums.size(); i++){
            sum+= cnt[nums[i]];
            ++cnt[nums[i]];
        }
        return sum;
    }
};

int main() {

    return 0;
}
