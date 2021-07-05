#include<bits/stdc++.h>
using namespace std;

class Solution {
    int countSetBit(int num){
        int cnt = 0;
        while(num){
            num &= (num-1);
            cnt++;
        }
        return cnt;
    }
public:
    vector<int> sortByBits(vector<int>& arr) {
        int arrLen = arr.size();
        vector<vector<int>> store(14);

        for(int it: arr){
            int val = countSetBit(it);
            cout << it << ": " << val <<"\n";
            store[val].push_back(it);
        }

        vector<int> res;
        for(vector<int> st: store){
            sort(st.begin(), st.end());
            for(int it: st){
                res.push_back(it);
            }
        }
        return res;
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
    vector<int> res;
    res = obj.sortByBits(arr);
    for(int i=0; i<res.size(); i++){
        cout << res[i] << " ";
    }
    return 0;
}