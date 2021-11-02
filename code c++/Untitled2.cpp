#include<bits/stdc++.h>
using namespace std;
int n,m,a[100]={0};
vector<int> v[100];
void inp(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y; cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
}
void dfs(int u){
	a[u]=1;
	for(auto x:v[u]){
		if(a[x]==0){
			dfs(x);
		}
	}
}
void lienthong(){
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(a[i]==0){
			cnt++;
			dfs(i);
		}
	}
	cout<<cnt<<endl;
}
int main(){
	int t; cin>>t;
	while(t--){
		inp();
		lienthong();
	}
}
