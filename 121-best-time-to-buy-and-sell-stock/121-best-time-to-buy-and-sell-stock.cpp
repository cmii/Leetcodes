class Solution {
public:
    int maxProfit(vector<int>& p) {
      int n = p.size() ;
      int pro = 0 ;
      int mini = p[0] ;
        for( int i=1 ; i<n ; i++){
           if( p[i]-mini > pro  ){
             pro = p[i]-mini ;
           } 
           mini = min(mini,p[i]) ;
        }
      
      return pro ;
    }
};