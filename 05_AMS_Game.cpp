#include<bits/stdc++.h>
using namespace std;


int gcd(int a, int b){
	int maxi = max(a,b);
	int mini = min(a,b);
	if(mini == 0){
		return maxi;
	}
	else{
		while(maxi%mini){
			int val = maxi%mini;
			mini = min(val,maxi);
			maxi = max(val,maxi);
		}
		return mini;
	}
}


int main(){
	//The operations performed is of euclidean alogrithm of prime numbers.
	//We have to find out the gcd of all the numbers of the array.

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		
		int result =0;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			result = gcd(result,x);
		}
		cout<<result<<endl;
	}



	return 0;								
}