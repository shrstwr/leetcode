class Solution {
public:
    bool check(vector<int>& nums){
        bool res=true;
        int dropCount=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>nums[(i+1)%nums.size()]){
                dropCount++;
            }
        }
        if(dropCount>1){
            res=false;
        }
        return res;
    }
};