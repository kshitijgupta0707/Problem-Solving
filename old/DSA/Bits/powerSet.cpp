class Solution {
public:

  bool lemonadeChange(vector<int>& bills) {
      if(bills[0] != 5){
        return false;
      }   
      
      int five = 0  , ten = 0;

      for(int j = 0 ; j < bills.size() ; j++){

         if(bills[j] == 5){
            five++;
         }  
         else if(bills[j] == 10){
            ten++;
            if(five >= 1){
            five--;
            }
            else {
            return false;
            }

         }  
          else{
             if(five >= 1 && ten >= 1){
                five--;
                ten--;
             }
             else if(five >= 3){
               five -= 3;
             }
             else{
                return false;
             }
         } 
    }
         return true;
  }
};