#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
      char r;
      int p;
      cin>>r>>p;
      //cout<<r<<p;
      for(int i=1;i<=8;i++){
        if(i==p){
            continue;
        }
        else{
            cout<<r<<""<<i<<endl;
        }
      }
      for(char w='a';w<='h';w++){
        if(w==r){
            continue;
        }
        else{
            cout<<w<<""<<p<<endl;
        }
      }

    }
}