class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        else{
            int num = x;
            long long int result =0;
            while(num){
                int rem =num%10;
                result= result*10+rem;
                num = num/10;
            }
            if(x==result){
                return true;
            }
        }
        return false;
        
    }
};