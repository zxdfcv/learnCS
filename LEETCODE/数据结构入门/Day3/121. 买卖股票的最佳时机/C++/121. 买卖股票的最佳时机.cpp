class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, i, size = prices.size();
        vector<int> count;
        count.push_back(prices[0]);
        for (i = 0; i <= size - 1; i++)//遍历,实质是动态规划
        {
            profit = max(profit, prices[i] - count[i]);
            count.push_back(min(count.back(), prices[i]));
        }
        return profit;
    }
    
};//经典投资问题//动态规划
