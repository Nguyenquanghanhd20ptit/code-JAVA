#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=a[i];
		}
		sort(a,a+n);
		int dem=0;
		for(int i=0;i<n-1;i++){
			if(a[i]==b[i] && b[i]!=a[i+1]){
				dem++;
			}
		}
		dem++;
		cout<<dem<<endl;
	}
}
