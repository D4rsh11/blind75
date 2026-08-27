class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()== 1 ){
            return 0;
        }
        int maxp=0;
        int left=0; 
        int right=1; 
        while(right < prices.size()){
            if(prices[left] < prices[right]){
                maxp=max(maxp, prices[right]-prices[left]);
            }
            else{
                left=right;
            }
            right++;
        }
        return maxp;
    }
};