#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int numLen = nums.size();
        int limit = (int)pow(2, nums.size());
        int sum_xor = 0;
        for(int i=0; i<limit; i++){
            int xorv = 0;
            int temp = i;
            for(int j=numLen-1; j>=0; j--){
                int r = temp % 2;
                temp = temp/2;

                if (r != 0){
                    xorv = xorv ^ nums[j];
                }
            }
            sum_xor += xorv;
        }   
        return sum_xor;     
    }
};

int main() {
    int n; cin >> n;
    vector<int> arr;
    int ele;
    for(int i=0; i<n; i++){
        cin >> ele;
        arr.push_back(ele);
    }

    Solution obj;
    cout << obj.subsetXORSum(arr);   
    return 0;
}