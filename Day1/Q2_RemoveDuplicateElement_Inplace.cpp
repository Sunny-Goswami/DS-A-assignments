/* Problem: https://leetcode.com/problems/remove-element/ */

#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       int i=0, j=0;
       while(j < nums.size()){
           if (nums[j] != val){
               nums[i] = nums[j];
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
      
    int key; cin >> key;
    Solution obj; 
    int k = obj.removeElement(arr, key);

    cout << k <<" ";

    for(int i=0; i<=k; i++){
        cout << arr[i] << " ";
    }
}