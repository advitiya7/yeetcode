// Last updated: 1/22/2026, 7:51:26 PM
class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
          int ans=0;
        if(purchaseAmount<5){
            return 100;
        }
        if(purchaseAmount==5){
            return 100-purchaseAmount-5;
        }
        if(purchaseAmount>5 && purchaseAmount<=10){
            return 100-purchaseAmount-(10%purchaseAmount);
        }
        else if(purchaseAmount>10){
            int x=purchaseAmount%10;
            if(x>=5){
                ans=100-purchaseAmount-(10-x);
            }
            else if(x<5){
                ans=100-purchaseAmount+(x);
            }
        }
        return ans;

        
    }
};