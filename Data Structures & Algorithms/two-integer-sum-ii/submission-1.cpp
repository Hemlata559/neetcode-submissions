class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        int left = 0;
        int right = numbers.size()-1;

        while(left<right){
            int val = numbers[left]+numbers[right];
            if(val==target){
                ans.push_back(left+1);
                ans.push_back(right+1);
                return ans;
            }else if(val<target){
                left++;
            }else{
                right--;
            }
        }
        return ans; 
    }
};
