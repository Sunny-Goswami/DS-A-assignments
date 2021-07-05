#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;

class Solution {

public:
    void findNumOfSmallerElements(int *arr, int N){
        vector<int> temp(arr, arr+N);
        sort(arr, arr+N);
        map<int, int> res;

        for(int i=0; i<N; i++){
            map<int, int> :: iterator it = res.find(arr[i]);
            if (it == res.end()){
                res.insert({arr[i], i});
            }
            else 
                continue;             
        }

        for(int i=0; i<N; i++){
            cout << res[temp[i]] <<" ";
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