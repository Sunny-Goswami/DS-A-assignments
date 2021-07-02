#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void decodeXOREncoding(int *arr, int N, int first){
            int xorv = first;
            cout << xorv <<" ";

            for(int i=0; i<N; i++){
                xorv ^= arr[i];
                cout << xorv <<" ";
            }
        }
};

int main() {
    int N; cin >> N;
    int arr[N];
    
    for (int i=0; i<N; i++){
        cin >> arr[i];
    }

    int first; cin >> first;

    Solution obj;
    obj.decodeXOREncoding(arr, N, first);
    return 0;
}