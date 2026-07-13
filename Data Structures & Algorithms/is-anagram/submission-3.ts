class Solution {
    /**
     * @param {string} s
     * @param {string} t
     * @return {boolean}
     */
    isAnagram(s: string, t: string): boolean {
        const map = new Map<string,number>;

        for(const ch of s){
            map.set(ch, (map.get(ch) || 0) +1  );
        }
        for(const ch of t){
            if(!map.get(ch))
                return false;
            else
                map.set(ch, map.get(ch) - 1);
        }

        for(const v of map.values()){
            if(v) return false;
        }
        return true;
    }
}
