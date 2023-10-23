class Solution {
public:
    
   
    bool isPowerOfFour(int n) {
        int count = 0;
        int p = 0;
        for(int i=31 ; i>=0 ; i--){
            if(n&(1<<i)){
                count++;
                p = i;
            }
        }
        return count==1 && p%2==0;
    }
};