class Solution {
public:
    bool isPalindrome(int x) {
      if(x<0) return false;
        long int rev=0, temp=x;
      while(temp) {
        rev= rev*10+temp%10;
        temp/=10;
      }
      return x == rev;
    }
};