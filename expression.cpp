#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       char a[n];
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
       int c=0;
       for(int i=0;i<n;i++){
        if(a[i]=='+'){
            c++;
        }
        else{
            c--;
        }
       }
       cout<<abs(c)<<endl;
    }
}