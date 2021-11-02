#include<bits/stdc++.h>
using namespace std;
int n,x,a[100],cnt;
void ktao(){
	a[1]=n;
	cnt=1;
}
void sinh(){
	int i=cnt;
	while(i>=1 && a[i]==1){
		i--;
	}
	if(i==0) x=0;
	else{
		a[i]--;
		int d=cnt-i+1;
		cnt=i;
		int q=d/a[i];
		int r=d%a[i];
		if(q){
			for(int j=1;j<=q;j++){
				cnt++; a[cnt]=a[i];
			}
		}
		if(r){
			cnt++; a[cnt]=r;
		}
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		ktao();
		x=1;
		while(x==1){
			for(int i=1;i<=cnt;i++){
				cout<<a[i]<<" ";
			}
			cout<<endl;
			sinh();
		}
	}
}
