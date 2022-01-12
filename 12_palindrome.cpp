class Solution {
public:
    bool isPalindrome(string s) {
        
        string name;
        int l = s.size();
        for(int i=0;i<l;i++){
            if((s[i]<=57 && s[i]>=48) || (s[i]<=122 && s[i]>=97)){
                name.push_back(s[i]);
            }
            else if(s[i]>=65 && s[i]<=90){
                name.push_back(char(s[i]+32));
            }
            else{
                continue;
            }
        }
        
        string revers = name;
        reverse(revers.begin(), revers.end());
        if(revers == name){
            return true;
        }
        else{
            return false;
        }
    }
};