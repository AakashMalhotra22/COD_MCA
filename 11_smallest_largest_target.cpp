class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        char ans;
        bool flag =false;
        int l = letters.size();
        for(int i=0;i<l;i++){
            if(letters[i]>target){
                ans = letters[i];
                flag = true;
                break;
            }
        }
        if(flag == false){
            return letters[0];
        }
        return ans;
    }
};