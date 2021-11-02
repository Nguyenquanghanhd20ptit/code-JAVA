#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,dem=1;
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				auto it=lower_bound(a+j,a+n,sqrt(a[i]*a[i]+a[j]*a[j]));
				if(a[i]*a[i]+a[j]*a[j]==(*it)*(*it)){
					cout<<"YES";
					dem=0;
					break;
				}
			}
		}
		if(dem==1) cout<<"NO";
		cout<<endl;
	}
}
