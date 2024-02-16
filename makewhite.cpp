#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,m,k;
    cin>>n>>m>>k;
   int a[n],b[m];
  // int h=k/2;
  // int as[h];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   for(int i=0;i<m;i++){
    cin>>b[i];
   }
   int f=0;
   int g=0;
   vector<int>ans;
   for(int i=0;i<n;i++){
    if(i%2==0){
        if(a[i]<=k) ans.push_back(a[i]);
        else f=1;
    }
   }
   for(int i=0;i<m;i++){
    if(i%2==0){
        if(b[i]<=k) ans.push_back(b[i]);
        else g=1;
    }
   }
   if(f==1||g==1) cout<<"NO"<<endl;
   else cout<<"YES"<<endl;
}
}