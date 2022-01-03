#include <bits/stdc++.h>
using namespace std;

const int N =1e7+10;
int arr[N];

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>n>>d;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            arr[i]=x;
        }
        
        for(int i = d;i<n;i++){
            cout<<arr[i]<<" ";
        }
        for(int i =0;i<d;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}