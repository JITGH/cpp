#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a[n];
   int maxi=0;
  for(int i=0;i<n;i++){
    cin>>a[i];
   
  }
   for(int i=1;i<n;i++){
    maxi=max(maxi,a[i]);
   }
   cout<<max(0,maxi+1-a[0]);

}  
