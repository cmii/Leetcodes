class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
      int count =0;
        for(vector<string> i: items) {
          if( (ruleKey == "type" && ruleValue == i[0]) || (ruleKey == "color" && ruleValue == i[1]) || (ruleKey == "name" && ruleValue == i[2]) ) count++;
        }
      return count;
    }
};