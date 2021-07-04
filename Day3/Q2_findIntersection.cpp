#include<bits/stdc++.h>

using namespace std;

class Solution{
    vector<int> solve(vector<int> nums1, vector<int> nums2){
        set<int> st(nums1.begin(), nums1.end());
        unordered_set<int> resSet;
        for(int i=0; i<nums2.size(); i++){
            auto pos = st.find(nums2[i]);
            if (pos != st.end())
                resSet.insert(nums2[i]);
        }
        vector<int> res(resSet.begin(), resSet.end());
        return res;
    }
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2){
        vector<int> res;
        if (nums1.size() > nums2.size()){
            res = solve(nums1, nums2);
        }
        else {
            res = solve(nums2, nums1);
        }
        return res;
    }
};

int main(){
    int n1, n2; cin >> n1 >> n2;
    vector<int>  nums1 ,nums2;
    int ele;
    for(int i=0; i<n1; i++){
        cin >> ele;
        nums1.push_back(ele);
    }
    for(int i=0; i<n2; i++){
        cin >> ele;
        nums2.push_back(ele);
    }
    Solution obj;
    vector<int> res;
    res = obj.intersection(nums1, nums2);
    for(int i=0; i<res.size(); i++)
        cout << res[i] <<" ";
    return 0;
}