#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int cf=1;
  int k;
  cin>>k;
  int ele=a[k-1];
  sort(a,a+n);
  for(int i=0;i<n;i++){
    if(ele!=a[n-i-1]){
      cf++;

  }
}
cout<<cf<<endl;
  if(n%2==0){
    cout<<(cf)<<endl;
  }
  else{
    cout<<cf-2<<endl;
  }
}
    