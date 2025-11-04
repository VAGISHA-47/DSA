// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        if(n==1) return 1;
        int L=0;
        int R=n;
        int firstBad=n;
        while(L<=R){
            int m=L+(R-L)/2;
            if(isBadVersion(m)){
                R=m-1;
                firstBad=m;

            }else{
                L=m+1;
            }
        }
        return firstBad;
        
    }
};