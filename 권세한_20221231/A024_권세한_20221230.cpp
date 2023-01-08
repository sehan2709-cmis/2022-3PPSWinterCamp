class Solution {
public:
  bool lemonadeChange(vector<int> & bills) {
    int cnt_5=0,cnt_10=0;        
    
    for(int i=0; i<bills.size(); i++){
      if(bills[i]==5){
        cnt_5++;
      } else if(bills[i] == 10){
        cnt_5--;
        cnt_10++;
      } else if(cnt_10 > 0){
        cnt_5--;
        cnt_10--;
      } else {
        cnt_5-=3;
      }
      
      if(cnt_5<0){
        return false;
      }
    }
    
  return true;
  }
};