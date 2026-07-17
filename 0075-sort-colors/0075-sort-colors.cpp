class Solution {
public:
    void sortColors(vector<int>& nums) {
        int start =0;
        while(start<nums.size()){

            for(int end =start + 1 ; end <nums.size();end++){
            
                if(nums[end]<=nums[start]){
                    swap(nums[start],nums[end]);
                }
            }
            start++;
            
        }
    }
};