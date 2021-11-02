#include<bits/stdc++.h>
using namespace std;
int n,x,k,a[100];
void ktao(){
    for(int i=1;i<=k;i++){
        a[i]=i;
    }
}
void sinh(){
    int i=k;
    while(i>=1 && a[i]==n+i-k){
        i--;
    }
    if(i==0) x=0;
    else{
        a[i]++;
        for(int j=i+1;j<=k;j++){
            a[j]=a[j-1]+1;
        }
    }
}
int main(){
    cin>>k>>n;
    ktao();
    x=1;
    while(x==1){
        for(int i=1;i<=k;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        sinh();
    }
}
