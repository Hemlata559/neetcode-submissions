class Solution {
public:
    int findMin(vector<int> &nums) {
        int number = INT_MAX;
        for(int i=0;i<nums.size();i++){
            number=min(number,nums[i]);
        }
        return number;
    }
};
