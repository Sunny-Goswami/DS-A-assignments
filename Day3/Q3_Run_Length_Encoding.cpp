#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void printRunLengthEncoding(int *arr, int N){
            for(int i=0; i<=N-2; i+=2){
                int freq = arr[i];
                int value = arr[i + 1];
                while (freq--){
                    cout << value << " ";
                }
            }
        }
};

int main() {
    int N; cin >> N;
    int arr[N];
    for(int i=0; i<N; i++){
        cin >> arr[i];
    }
    Solution obj;
    obj.printRunLengthEncoding(arr, N);
    return 0;
}