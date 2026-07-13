class Solution {
public:
    int binarySearch(vector<int>& nums, int l, int r, int target) {
        while(l<=r)
        {
            int m = (l+r)/2;
            if(nums[m] == target)
                return m;
            else if(nums[m] > target)
                return binarySearch(nums,l,m-1,target);
            else
                return binarySearch(nums,m+1,r,target);
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;

        return binarySearch(nums,l,r,target);
        
    }
};
