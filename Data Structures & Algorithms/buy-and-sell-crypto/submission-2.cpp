class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy_day = 0;
        int sell_day = 1;

        int maxProfit = 0;

        while(sell_day < prices.size()){
            if(prices[buy_day] < prices[sell_day]){
                int Profit = prices[sell_day] - prices[buy_day];
                maxProfit = max(Profit, maxProfit);
            }
            else{
                buy_day = sell_day;
            }
            sell_day++;
        }
        return maxProfit;
    }
};
