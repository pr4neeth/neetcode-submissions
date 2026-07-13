class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int c = 0;
        int p = 1;
        vector<int> r(nums.size(),0);

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == 0)
            {
                c++;
            }
            else
            {
                p = p*nums[i];
            }
        }

        if(c>1)
            return r;
        else if(c==1)
        {
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i] == 0)
                    r[i] = p;
            }
        }
        else
        {
            for(int i=0;i<nums.size();i++)
            {
                r[i] = p/nums[i];
            }
        }
    return r;
    }
};
