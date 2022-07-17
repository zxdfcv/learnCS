class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, i, size = prices.size();
        vector<int> count;
        count.push_back(prices[0]);
        for (i = 0; i <= size - 1; i++)//����,ʵ���Ƕ�̬�滮
        {
            profit = max(profit, prices[i] - count[i]);
            count.push_back(min(count.back(), prices[i]));
        }
        return profit;
    }
    
};//����Ͷ������//��̬�滮
