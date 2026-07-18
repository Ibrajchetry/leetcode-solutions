class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        for(int i = 0; i< nums.size();i++){
             int prefix = 0;
            for(int j =i;j< nums.size();j++){
               
                prefix+=nums[j];
                if(prefix == k){
                    count++;
                }

            }
        }
        return count;

    }
};