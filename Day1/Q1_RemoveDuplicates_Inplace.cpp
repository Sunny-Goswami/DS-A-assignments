#include<iostream>
#include<vector>
using namespace  std;

class Solution {
public:
    int removeDuplicates(vector<int> &nums) {
        int numLen = nums.size();
        if (numLen==0) return 0;
        
        for (int i=(numLen-2); i>=0; i--){
            if (nums[i] == nums[i+1]){
                nums[i+1] = -101;
            }
        }
        int k = 0;
        for(int i=0; i<numLen; i++){
            if (nums[i] != -1){
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};

int main(){
    int N; cin >> N;
    vector<int> arr;
    int ele;
    for(int i=0; i<N; i++){
        cin >> ele;
        arr.push_back(ele);
    }
    for(auto it: arr){
        cout << it << " ";
    }
    cout << "\n";
    
    Solution obj; 
    int k = obj.removeDuplicates(arr);
    for(auto it: arr){
        cout << it << " ";


}