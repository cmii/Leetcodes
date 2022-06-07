class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
      vector<bool> op;
      int max=0;
      for(int i: candies) if(i>max) max=i;
      for(int i: candies) {
        if(i+extraCandies>=max) op.push_back(true);
        else op.push_back(false);
      }
      return op;
    }
};