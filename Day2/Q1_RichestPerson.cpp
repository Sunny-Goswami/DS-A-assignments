#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int getRichestCustomer(vector<vector<int>> &accounts){
        int max = 0;
        int custId = -1;
        for(int i=0; i<accounts.size(); i++){
            int sum = 0;
            for(int it: accounts[i]){
                sum += it;
            }
            if (sum > max){
                max = sum;
                custId = i+1;
            }
        }
        return custId;
    }
};

int main(){
    int num_of_cust, num_of_banks;
    cin >> num_of_cust >> num_of_banks;
    vector<vector<int>> accounts;
    for(int i=0; i<num_of_cust; i++){
        vector<int> arr;
        for(int j=0; j<num_of_banks; j++){
            int ele;
            cin >> ele;
            arr.push_back(ele);
        }
        accounts.push_back(arr);
    }

    Solution obj;
    cout << obj.getRichestCustomer(accounts);
}