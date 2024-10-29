#include<bits/stdc++.h>
using namespace std;
int x=-1;
void tim(vector<long long> v,int k,int l,int r){
	if(l>r){
		cout << x << endl;
		return;
	}
	int m=(l+r)/2;
	if(v[m]<=k){
		x=max(m+1,x);
		tim(v,k,m+1,r);
	}
	else
	{
		if(v[m]>k)
			tim(v,k,l,m-1);
		
		
	}
}
int main(){
	int t;cin >> t;
	while(t--){
		int n,k;cin >> n>>k;
		vector<long long> v(n+1);
		x=-1;
		for(int i=0;i<n;i++){
			cin >> v[i];
		}
		tim(v,k,0,n-1);
	}
}