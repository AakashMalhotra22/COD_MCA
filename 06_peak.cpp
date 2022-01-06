#include <bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int>& v) {
        int n = v.size();
        //base check for size is 1.
        if (n==1){
            return 0;
        }
        
        //checking for first and last element
        int l =0;
        int u = n-1;
        int value =0;
        
        if(v[l]>v[l+1]){
            value =l;
        }
        else if (v[u]>v[u-1]){
            value = u;
        }
        
        else{
			while(u-l>1){
            	int mid = (l+u)/2;
				if(v[mid]>v[mid-1]&& v[mid]>v[mid+1]){
                	return mid;
           		}
            	else if (v[mid]>v[mid-1]&& v[mid]<v[mid+1]){
                	l = mid+1;
            	}
            	else if(v[mid]<v[mid-1]&& v[mid]>v[mid+1]){
                	u = mid-1;
            	}
            	else{
                	l = mid+1;
            	}
	        }
        	for(int i=l;i<=u;i++){
            	if (i!=0 && i!=n-1){
                	if(v[i]>v[i-1]&& v[i]>v[i+1]){
                    	value =i;
                	}
            	}
        	}
        }           
    return value;
}

int main(){
	int n;
	cin>>n;

	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}

	cout<<findPeakElement(v);
	return 0;
}