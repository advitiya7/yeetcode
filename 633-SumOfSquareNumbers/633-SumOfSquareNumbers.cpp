// Last updated: 1/22/2026, 7:55:29 PM
class Solution {
public:
long long floorSqrt(int x)
{
    if (x == 0 || x == 1)
        return x;
 
  
    long long i = 1, result = 1;
    while (result <= x) {
        i++;
        result = i * i;
    }
    return i - 1;
}
    bool judgeSquareSum(int c) {
        long long l=0;
         long long r=floorSqrt(c);
        bool flag=false;
        while(l<=r){
            if(l*l+r*r==c){
                flag=true;
                break;
            }
            else if(l*l+r*r>c){
                r--;
            }
            else{
                l++;
            }
        }
        return flag;

    }
};