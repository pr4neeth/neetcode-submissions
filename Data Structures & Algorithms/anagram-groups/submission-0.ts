class Solution {
    /**
     * @param {string[]} strs
     * @return {string[][]}
     */
    groupAnagrams(strs: string[]): string[][] {
        const map = new Map<string, string[]>();

        for(const str of strs){
            const count = new Array<number>(26).fill(0);

            for(const char of str){
                const index = char.charCodeAt(0) - "a".charCodeAt(0)
                count[index]++;
            }

            const key = count.join("#");

            if(!map.has(key)){
                map.set(key,[]);
            }
            map.get(key).push(str);
        }

        return Array.from(map.values());
    }
}
