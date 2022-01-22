#include <bits/stdc++.h>
using namespace std;

const int M = 1e9+7;

int fn(int n){
    int count =0;
    while(n){
        count+=1;
        n/=2;
    }
    return count;
}

int main(){
    int n;
    cin>>n;

    if (n==0){
        cout<<1<<endl;
        return 0;
    }

    int numberofbits = fn(n);

    int num = (1<<numberofbits)-1;

    int val =0;
    int powe = 1;
    for(int i=0;i<numberofbits;i++){
        int use = (1<<i);
        if((n&use)==0){
            val+=(powe);
        }
        powe*=2;
    }
    cout<<val<<endl;

    return 0;
}