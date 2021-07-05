#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string morseCode[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

        set<string> res;
        for(string word: words){
            string str = "";
            for(char ch: word){
                str += morseCode[ch - 'a'];
            }
            res.insert(str);
        }
        res.size();
    }
};
int main() {
    
    return 0;
}