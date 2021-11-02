#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;  cin>>n>>m;
	int c1,c2; cin>>c1>>c2;
	int a[n],b[m];
	map<int,int> mp;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+m);
	int dmin=abs(c1-c2);
	int x=INT_MAX;
	for(int i=0;i<n;i++){
		auto it=lower_bound(b,b+n,a[i]);
		int sum1=abs(a[i]-*it);
		mp[sum1]++;
		int sum2=abs(a[i]-b[it-a-1]);
		mp[sum2]++;
		sum1=min(sum1,sum2);
		x=min(x,sum1);
	}
	cout<<x+dmin<<" ";
	for(auto it:mp){
		cout<<it.second;
		break;
	}
}
