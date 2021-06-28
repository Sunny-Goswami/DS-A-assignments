#include<iostream>
#include<vector>
using namespace  std;

class Solution {
public:
    int removeDuplicates(vector<int> &nums) {
        int numLen = nums.size();
        if (numLen==0) return 0;
        
        int i = 1, j = 0;
        while(j < numLen-1){
            if (nums[j] != nums[j + 1]){
                nums[i] = nums[j + 1];
                i++;
            }
            j++;
        }
        return i;
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
    for (int i = 0; i < k; i++) 
        cout << arr[i] << " ";
}