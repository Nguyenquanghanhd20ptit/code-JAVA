#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		unordered_map<int,int> mp;
		for(int i=0;i<n;i++){
			cin>>a[i];
			mp[a[i]]++;
		}
		int dem=0;
		for(int i=0;i<n;i++){
			if(mp[a[i]]>1){
				cout<<a[i]<<endl;
				dem=1;
				break;4
				
			}
		}
		if(dem==0) cout<<"NO"<<endl;
	}
}
