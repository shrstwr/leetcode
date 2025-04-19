class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,j=0;
        for(;i<nums.size();){
            if(nums[i]==0){
                i++;
            }else if(nums[i]!=0 && i==j){
                i++;
                j++;
            }else if(nums[i]!=0 && i!=j){
                int t = nums[i];
                nums[i++]=nums[j];
                nums[j++]=t;
            }
        }
    }
};