class Solution {
    /**
     * @param {number[]} nums
     * @param {number} k
     * @return {number[]}
     */
    topKFrequent(nums: number[], k: number): number[] {
        const map = new Map<number, number>();

        for(const num of nums){
            map.set(num, (map.get(num) || 0) + 1)
        }

        const sorted = [...map.entries()].sort((a,b) => b[1] - a[1]);

        const r = new Array<number>();

        for(let i=0;i<k;i++){
            r.push(sorted[i][0])
        }
        return r;
    }
}
