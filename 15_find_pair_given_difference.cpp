#include <bits/stdc++.h>
using namespace std;

bool findPair(int arr[], int size, int n){
    sort(arr,arr+size);
    if(size==1){
        return false;
    }
    
    int i=0;
    int j =1;
    while(j<size){
        int p = arr[j]-arr[i];
        if(p==n){
            return true;
        }
        else if(p>n){
            i++;
            if (i==j){
                j++;
            }
        }
        else{
            j++;
        }
    }
    return false;
}

int main(){
	int size;
	cin>>size;
    int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}


    cout<<findPair(arr,size,n);

	return 0;
}