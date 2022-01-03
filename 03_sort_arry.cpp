#include <bits/stdc++.h>
using namespace std;


void sort012(int a[], int n){
    int zero =0;
    int ones =0;
    int two =0;
    for(int i=0;i<n;i++){
        if (a[i]==0){
            zero++;
        }
        else if(a[i]==1){
            ones++;
        }
        else{
            two++;
        }
    }

    for(int i=0;i<n;i++){
        if(zero>0){
            a[i]=0;
            zero--;
        }
        else if (ones>0){
            a[i]=1;
            ones--;
        }
        else{
            a[i]=2;
            two--;
        }
    }


}


int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort012(a,n);

    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }




}
