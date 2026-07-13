class Solution {
    /**
     * @param {number[]} nums
     * @param {number} target
     * @return {number[]}
     */
    twoSum(nums: number[], target: number): number[] {
        const map = new Map<number, number>;

        for(let i = 0; i<nums.length; i++){
            const c = target - nums[i];
            if(map.has(c))
                return [i, map.get(c)];
            map.set(nums[i],i);
        }
        return [];
    }
}
