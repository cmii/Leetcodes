class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
      sort(nums.begin(), nums.end());
      vector<int> op;
      for(int i=0; i<nums.size()-1; i++) {
        if(nums[i] == nums[i+1]) i++;
        else op.push_back(nums[i]);
      }
      if(nums[nums.size()-1] != nums[nums.size()-2]) op.push_back(nums[nums.size()-1]);
      return op;
    }
};