class Solution {
public:
    bool isAnagram(string str1, string str2) {
        if(str1.length()!=str2.length()){
            return false;

        }
        int count[26]={0};
        for(int i=0;i<str1.length();i++){
            int idx=str1[i]-'a';
            count[idx]++;
        }
        for(int i=0;i<str2.length();i++){
            int idx=str2[i]-'a';
            if(count[idx]==0){
                return false;
            }
            count[idx]--;
        }
        return true;
                

    }
    int main(){
        string str1;
        cin>>str1;
        string str2;
        cin>>str2;
        isAnagram(str1,str2);
        return 0;
    }
};