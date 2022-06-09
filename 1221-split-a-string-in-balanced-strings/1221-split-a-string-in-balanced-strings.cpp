class Solution {
public:
    int balancedStringSplit(string s) {
        int ans=0, count=0;
      for(char i: s) {
        if(i == 'L') ans++;
        else ans--;
        if(ans==0) count++;
      }
      return count;
    }
};