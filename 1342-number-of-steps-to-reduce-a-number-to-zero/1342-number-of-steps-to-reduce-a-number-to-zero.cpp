class Solution {
public:
    int numberOfSteps(int num) {
        int c=0;
      while(num) {
        c++;
        if(num%2) num-=1;
        else num/=2;
      }
      return c;
    }
};