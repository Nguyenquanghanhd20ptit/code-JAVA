#include<bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],b[n];
		int max=-10000000;
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=a[i];
			if(a[i]>max){
				max=a[i];
			}
		}
		sort(b,b+n);
		for(int i=0;i<n;i++){
			if(a[i]==max){
				cout<<"_"<<" ";
			}
			else{
			auto it=upper_bound(b,b+n,a[i]);
			cout<<*it<<" ";
		  }
		}
		cout<<endl;
	}
}
