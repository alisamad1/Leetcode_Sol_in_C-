int maxProfit(vector<int>& prices) {
    if(prices.size() <= 1){
        return 0;
    }
    int buy = prices[0];
    int profit = 0;
    for(int i = 1; i<prices.size(); i++){
        if(prices[i] < prices[i-1]){
            profit += prices[i-1] - buy;
            buy = prices[i];
        }
    }
    profit += prices[prices.size() - 1] - buy;
    return profit;
}