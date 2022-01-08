#include <bits/stdc++.h>
using namespace std;
const int N = 1e6;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long n,m;
        cin>>n>>m;
        // declaring unordereset for counting distinct elements.
        unordered_map<long long int, int> s;
        
        for(int i=0;i<n;i++){
            long long x;
            cin>>x;
            s[x%m]++;
        }        
        long long distinct = 0;
        long long unique =0;

        for(auto &i:s){
            if(i.second==1){
                distinct++;
                unique++;
            }
            else if(i.second>=2){
                distinct++;
            }

        }
        cout<<distinct<<endl;
        cout<<unique<<endl;
    }
    return 0;
}
