class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> v(nums);
        int i=0,k=0,j=nums.size()-1;
        for(;k<nums.size();){
            if(nums[k]==0){
                v[j--]=0;
                k++;
            }else{
                v[i++]=nums[k++];
            }
        }
        nums=v;
    }
};