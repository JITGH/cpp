#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
   ll k;
   cin>>k;
   map<string,int>m;
   for(int i=0;i<k;i++){
    string s;
    cin>>s;
   m[s]++;
   }
  for(auto it:m){
   if(it.second>k/2) 
   cout<<it.first<<'\n';
  }
    
}