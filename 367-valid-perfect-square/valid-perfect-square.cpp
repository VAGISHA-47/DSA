class Solution {
public:
    bool isPerfectSquare(long num) {
        if(num<2){
            return true;

        }
        int left=2;
        int right=num/2;
        while(left<=right){
            long mid= (left+right)/2;
            if(mid*mid==num){
                return true;
            }else if(mid*mid<num){
                left= mid +1;
            }else{
                right = mid-1;
            }
        }
        return false;
        
    }
};