class Solution {
public:
    int hammingDistance(int x, int y) {
        int z= x^ y;
        int distance =0;

        while(z>0){
            if(z&1==1){
                distance +=1;
            }
            z=z>>1;
        }
        return distance;
        
    }
};