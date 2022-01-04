#include<bits/stdc++.h>

using namespace std;

const int N =1e6+10;
vector<bool> v(N,true);


int main(){
    v[1]=true;
	for(int i=2;i*i<=N;i++){
		if(v[i]){
			for(int j=i*i;j<=N;j+=i){
				v[j]=false;
			}
		}
	}
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin>>n;
		if(v[n]){
			cout<<"No"<<endl;
		}
		else{
			cout<<"Yes"<<endl;
		}
	}
	return 0;								
}