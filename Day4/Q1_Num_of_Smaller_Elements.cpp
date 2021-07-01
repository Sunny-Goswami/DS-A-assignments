#include<iostream>
using namespace std;

class Solution {
public:
    void findNumOfSmallerElements(int *arr, int N){
        for(int i=0; i<N; i++){
            int cnt = 0;
            for(int j=0; j<N; j++){
                if (arr[i] > arr[j])
                    cnt++;
            }
            cout << cnt <<" ";
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
    obj.findNumOfSmallerElements(arr, N);
    return 0;
}