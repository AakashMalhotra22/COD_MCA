class Solution{
    public:
    long long minTime(long long a[], long long b[], long long n)
    {
        long long int Astart =0;
        long long int Bstart =0;
        for(int i=0;i<n;i++){
            if (i%2){
                Astart += b[i];
                Bstart += a[i];
            }
            else{
                Astart += a[i];
                Bstart += b[i];
            }
        }
        return min(Astart, Bstart);
    }
};