#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> res(nums.size(), -1);     
        for(int i=0; i<index.size(); i++){
            int idx = index[i];
            if (res[idx] == -1)
                res[idx] = nums[i];
            else{
                vector<int> :: iterator it = res.begin();
                res.insert((it+idx), nums[i]);
                res.pop_back();
            }
        }
        return res;
    }
};

int main() {
    vector<int> nums;
    vector<int> index;
    int N; cin >> N;

    int ele;
    for(int i=0; i<N; i++){
        cin >> ele;
        nums.push_back(ele);
    };
    for(int i=0; i<N; i++){
        cin >> ele;
        index.push_back(ele);
    };
      
    Solution obj;
    vector<int> op;
    op = obj.createTargetArray(nums, index);

    for(int i=0; i<op.size(); i++){
        cout << op[i] <<" ";
    }
    return 0;
}