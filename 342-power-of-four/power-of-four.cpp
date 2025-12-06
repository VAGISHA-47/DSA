class Solution {
public:
    bool isPowerOfFour(int num) {
         if(num<1) return false;
         int n=num,count=0;
         while(n>1){
            n>>=2;
            count+=2;

         }
         return (n<< count)== num;
        
    }
};