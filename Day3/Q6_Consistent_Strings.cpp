/*https://leetcode.com/problems/count-the-number-of-consistent-strings/*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int alpha[26];
        memset(alpha, 0, sizeof(alpha));

        for(char ch: allowed)
            alpha[ch - 'a'] = 1;
        
        int res = words.size();
        for(string word: words){
            for(char ch: word){
                if (alpha[ch-'a'] == 0){
                    res--;
                    break;
                }
            }
        }

        return res;
    }
};


int main() {
    string allowed = ""; cin >> allowed;
    vector<string> words;
    string temp = "";
    int N; cin >>N;
    for(int i=0; i<N; i++){
        cin >> temp;
        words.push_back(temp);
    }
    Solution obj;
    cout << obj.countConsistentStrings(allowed, words);
    return 0;
}