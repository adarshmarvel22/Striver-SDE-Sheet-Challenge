class Solution {
public:
//     asad
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int p=prices[0];
        int i=1;
        while(i<prices.size()){
            if(prices[i]-p<=0){
                p=prices[i];
            }
            else{
                profit=max(profit,prices[i]-p);
            }
            i++;
        }
        return profit;
    }
};
