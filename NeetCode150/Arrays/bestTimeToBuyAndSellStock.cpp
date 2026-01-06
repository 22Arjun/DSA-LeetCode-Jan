class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0;
        int r = 1;

        int max_Profit = 0;

        while(r < prices.size()) {

            if(prices[r] > prices[l]) {
                max_Profit = max(max_Profit, prices[r] - prices[l]);
                r++;
                
            }

            else {
                l = r;
                max_Profit = max(max_Profit, prices[r] - prices[l]);
                r++;
            }
        }
        return max_Profit;
        
    }
};