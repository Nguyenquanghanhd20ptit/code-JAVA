#include<bits/stdc++.h>
using namespace std;
void hangdoi(int n){
	vector<string> v;
	queue<string> q;
	q.push("0");
	q.push("1");
	while(1){
		string s=q.front();
		q.pop();
		if(s.length()==n) break;
		int dem=0;
		for(int i=0;i<s.length();i++){
			dem+=s[i];
		}
		if(dem%2==0){
			q.push(s+"0");
			q.push(s+"1");
			if(s.length()+1==n){
				v.push_back(s+"0");
				v.push_back(s+"1");
			}
		}
		else{
			q.push(s+"1");
			q.push(s+"0");
			if(s.length()+1==n){
				v.push_back(s+"1");
				v.push_back(s+"0");
			}
		}
	}
	for(int i=0;i<v.size();i++){
			cout<<v[i]<<" ";
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		if(n==1){
			cout<<0<<" "<<1;
		}
		else{
			hangdoi(n);
      	}
      	cout<<endl;
   }
}
