#include<bits/stdc++.h>
using namespace std;

bool check(int n){
	string num = to_string(n);
	int l = num.size();
	for(int i=0;i<l-1;i++){
		if(num[i]=='2' && num[i+1]=='1'){
			return true;
		}
	}
	return false;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;

		if(n%21==0){
			cout<<"The streak is broken!"<<endl;
		}
		else if (check(n)){
			cout<<"The streak is broken!"<<endl;
		}
		else{
			cout<<"The streak lives still in our heart!"<<endl;
		}
	}
	return 0;
}