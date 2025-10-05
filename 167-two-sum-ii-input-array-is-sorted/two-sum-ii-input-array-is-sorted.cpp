class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n= arr.size();
        int i=0;
        int j=n-1;
        while(i<j){
            int sum =arr[i]+arr[j];

            if(sum < target){
                i++;
            }
            else if(sum>target){
                j--;
            }else{
                return {i+1,j+1};

            }
        
        }
        return {};
    }

};