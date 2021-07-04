/*https://leetcode.com/problems/array-partition-i/ */

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int sum = 0;
        for(int i=0; i<nums.size(); i+=2)
            sum += nums[i];
        return sum;
    }
};
int main() {    
    int N; cin >> N;
    vector<int> arr;
    int ele;
    for(int i=0; i<N; i++){
        cin >> ele;
        arr.push_back(ele);
    }
    Solution obj;
    cout << obj.arrayPairSum(arr);
    return 0;
}