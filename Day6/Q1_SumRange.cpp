#include<iostream>
#include<vector>
using namespace std; 

class Solution {
public:
    int sumRange(vector<int> arr, int left, int right) {
        for(int i=1; i<arr.size(); i++){
            arr[i] += arr[i-1];
        }

        if (left==0)
            return arr[right];
        else 
            return (arr[right] - arr[left - 1]);
    }
};
int main(){
    int n; cin >> n;
    vector<int> arr;
    int ele;
    for(int i=0; i<n; i++){
        cin >> ele;
        arr.push_back(ele);
    }
    Solution obj;
    int T; cin >> T;
    while (T--){
        int left, right; cin >> left >> right;
        cout << obj.sumRange(arr,left, right) <<"\n";
    }
    return 0;
}