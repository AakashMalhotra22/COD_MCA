class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        
        vector<int> v;
        int lastleader = a[n-1];
        
        for(int i=n-1;i>=0;i--){
            if(a[i]>=lastleader){
                lastleader = a[i];
                v.push_back(lastleader);
            }
        }
        
        reverse(v.begin(),v.end());
        return v;
    }
};