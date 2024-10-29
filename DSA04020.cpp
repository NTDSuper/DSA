#include<bits/stdc++.h>
using namespace std;
void tim(vector<int> v,int k,int l,int r){
	int m=(l+r)/2;
	if(v[m]==k){
		cout << m+1 << endl;
		return;
	}
	if(l>r){
		cout << "NO" << endl;
		return;
	}
	else{
		if(v[m]>k) tim(v,k,l,m-1);
		if(v[m]<k) tim(v,k,m+1,r);
	} 
}
int main(){
	int t;cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k ;
		vector<int> v(n);
		for(int i=0;i<n;i++){
			cin >> v[i];
		}
		tim(v,k,0,n-1);
	}
}