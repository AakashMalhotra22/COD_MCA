class Solution {
public:
    int mySqrt(int x) {
    
        if(x==0){
            return 0;
        }
        else if(x==1){
            return 1;
        }
    
        // binary search
        int l =1;
        int u = x;
        int result =0;
        while(u-l>0){
            double mid = l +(u-l)/2;
            if(mid*mid <= x && (mid+1)*(mid+1)>x){
                result = mid;
                break;    
            }
            else if (mid*mid <x && (mid+1)*(mid+1)==x){
                result = mid+1;
                break;
            }
            else if (mid*mid <x && (mid+1)*(mid+1)<x){
                l = mid;
            }
            else{
                u = mid;
            }
        }
        return result;
    }
};