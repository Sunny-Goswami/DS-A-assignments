#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string truncateSentence(string s, int k) {
        int i;
        for(i=0; i<s.length(); i++)      {
            if (s[i] == ' ')
                k--;
            if (!k)
                break;
        }

        string res = "";
        for(int j=0; j<i; j++){
            res+=s[j];
        }
        return res;
    }
};

int main() {
    string sent; getline(cin, sent);
    int k; cin >> k;
    Solution obj;
    cout << obj.truncateSentence(sent, k);
    return 0;
}