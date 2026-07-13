class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int slow = 0;
        int fast =1;
        int r = 0;

        while(slow<prices.size() && fast<prices.size())
        {
            if(prices[slow]<prices[fast])
            {
                if(prices[fast] - prices[slow] > r)
                    r = prices[fast] - prices[slow];
                fast++;
            }
            else
            {
                slow = fast;
                fast++;
            }
        }
        return r;
    }
};
