class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> profits; 
    int bought = 0; 
    int right = bought + 1; 
    int profit = 0; 
    while(right < prices.size()){
        
        profit = prices[right] - prices[bought];
        if(profit > 0){
            profits.push_back(profit);
        }
        if(prices[right] < prices[bought]) bought = right;
        right++;
    }

        if(profits.size()>0){
            int maxProfit = *max_element(profits.begin(),profits.end());
            return maxProfit;
        }else{
            return 0;
        }

    }
};
