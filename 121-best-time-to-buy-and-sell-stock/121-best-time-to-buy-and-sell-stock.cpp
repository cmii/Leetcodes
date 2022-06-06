class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m=prices[0];
      int s=0;
      for(int i=1; i<prices.size(); i++) {
        if(prices[i]-m> s) s=prices[i]-m;
        m= min(m, prices[i]);
      }
      return s;
    }
};