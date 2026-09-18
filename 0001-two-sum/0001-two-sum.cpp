class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>a;
        for(int i=0;i<nums.size();i++){
            int need = target - nums[i];
            if(a.count(need)){
                return {i,a[need]};
            }
            a[nums[i]]=i;
        }
        return {};
    }
};