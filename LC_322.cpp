int coinChange(vector<int>& coins, int amount) {
    vector<int> dp(amount+1, amount+1);
    dp[0] = 0;
    for(int coin: coins){
     for(int i = coin; i<=amount; i++){
         dp[i] = min(dp[i], dp[i-coin] + 1);
     }
    }
    return dp[amount] > amount ? -1 : dp[amount];
 }