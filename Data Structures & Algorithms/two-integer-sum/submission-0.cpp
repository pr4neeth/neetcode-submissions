class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> m;
        for(int i=nums.size()-1;i>=0;i--){
            int c = target - nums[i];
            if(m.count(c))
                return {i,m[c]};
            m[nums[i]] = i;
        }
        return {};
        
        
        
    }
};
