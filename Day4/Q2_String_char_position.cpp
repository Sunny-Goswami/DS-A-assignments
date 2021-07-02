#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void charPosition(string str, int *arr, int N, char* res){
            for(int i=0; i<N; i++){
                res[arr[i]] = str[i];
            }
        }
};

int main() {
    string inp = ""; cin >> inp;
    int N; cin >> N;
    if (N!=inp.length()){
        return 0;
    }

    int arr[N];
    for(int i=0; i<N; i++){
        cin >> arr[i];
    }
      
    Solution obj;
    char res[N];
    obj.charPosition(inp, arr, N, res);

    for(char ch: res){
        cout << ch <<" ";
    }
    return 0;
}