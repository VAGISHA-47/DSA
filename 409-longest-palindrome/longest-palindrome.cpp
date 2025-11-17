class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> charcount(128,0);

        for(char c:s){
            charcount[c]++;
        }
        int maxlength=0;
        bool oddfound=false;

        for(int count:charcount){
            if(count%2==0){
                maxlength+=count;
            }else{
                oddfound=true;
                maxlength+=count-1;
            }
        }
        if(oddfound){
            maxlength++;
        }
        return maxlength;

        
    }
};