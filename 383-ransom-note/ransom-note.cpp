class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> m;
        for(char& c: magazine){
            m[c]=1 + m[c];
        }
        for(char& c: ransomNote){
            if(m.count(c) && m[c] > 0) m[c]--;\
            else return false;
        }
        return true;
        
    }
};