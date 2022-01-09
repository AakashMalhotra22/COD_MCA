class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> v;
        int i =0;
        int j = numbers.size()-1;
        while(i<j){
            int cur_val =numbers[i]+numbers[j];
            if (cur_val==target){
                v.push_back(i+1);
                v.push_back(j+1);
                break;
            }
            else if(cur_val>target){
                j--;
            }
            else{
                i++;
            }
        }
        return v;
    }
};