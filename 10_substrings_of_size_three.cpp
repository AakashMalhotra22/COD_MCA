class Solution {
public:
    int countGoodSubstrings(string s) {
     int l = s.size();
     int occur = 0;
     
     for(i=0;i<l-2;i++){
         if(s[i]!=s[i+1] && s[i+1]!=s[i+2]&& s[i]!=s[i+2]){
             occur+=1;
         }
     }
     return occur;
    }
};