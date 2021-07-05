#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int left = 0; 
        int right = arr.size()-1;
        while (left < right){
            int mid = left + (right-left)/2;

            if ((arr[mid-1] < arr[mid]) && (arr[mid + 1] < arr[mid]) )
                return mid;
            else if (arr[mid-1] < arr[mid])
                left = mid + 1;
            else 
                right = mid;
        }
        return -1;
    }
};

int main(){
    int n;  cin >> n;
    vector<int> arr;
    int ele;
    for(int i=0; i<n; i++){
        cin >> ele;
        arr.push_back(ele);
    }

    Solution obj;
    cout << obj.peakIndexInMountainArray(arr);
    return 0;
}