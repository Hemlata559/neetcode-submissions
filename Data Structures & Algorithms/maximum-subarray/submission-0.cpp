class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr=nums[0];
        int conti=nums[0];
        for(int i=1;i<nums.size();i++){
            curr=curr+nums[i];
            curr=max(curr,nums[i]);
            conti=max(curr,conti);
        }
        return conti;

    }
};
