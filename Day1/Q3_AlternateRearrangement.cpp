#include<iostream>
using namespace std;

class Solution {
public:
    void rearrange(int *arr, int n){
        int res[n];
        int mid = n/2;

        int k = 0;
        for(int i=0; i<mid; i++){
            res[k] = arr[i];
            res[k + 1] = arr[mid + i];
            k += 2;
        }

        for(int i=0; i<n; i++){
           cout << res[i] << " ";
        }
    }
};
int main(){
    int N; cin >> N;
    int arr[N];
    for(int i=0; i<N; i++){
        cin >> arr[i];
    }
      
    Solution obj; 
    obj.rearrange(arr, N);
}