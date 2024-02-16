#include<bits/stdc++.h>
using namespace std;
int main(){
   long int n,l,r;
    cin>>n>>l>>r;
    long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        
    }
    for(int i=0;i<n;i++){
        if(a[i]<=l){
            cout<<l<<" ";

        }
        else{
            cout<<r<<" ";
        }
    }
    
}