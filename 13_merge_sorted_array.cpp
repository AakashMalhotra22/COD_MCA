class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
    vector<int> temp(m+n,0);
    for(int i=0;i<m;i++){
        cin>>nums1[i];
    }
    for(int j=0;j<n;j++){
        cin>>nums2[j];
    }


    int i =0,j=0,k=0;

    while(i<m && j<n){
        if(nums1[i]<=nums2[j]){
            temp[k]=nums1[i];
            i++;
        }
        else{
            temp[k]=nums2[j];
            j++;
        }
        k++;
    }

    while(i<m){
        temp[k]=nums1[i];
        i++;
        k++;
    }
    while(j<m){
        temp[k]= nums2[j];
        j++;
        k++;
    }

    for(int p=0;p<m+n;p++){
        nums1[p]=temp[p];
    }
    return;
    }
};