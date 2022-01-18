#include <bits/stdc++.h>
using namespace std;

int equilibriumPoint(long long a[], int n) {
    
        long long sum =0;
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
        
        long long presum =0;
        for(int i=0;i<n;i++){
            if(presum == sum-presum-a[i]){
                return i+1;
            }
            presum+=a[i];
        }
        return -1;
    }
int main(){
    int n;
    cin>>n;

    long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<equilibriumPoint(a,n);
    return 0;
    
}

