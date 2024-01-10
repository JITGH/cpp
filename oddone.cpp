#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
       // int a=0;
       // int b,c,d;
        //cin>>b>>c>>d;
       // a=a^b^c^d;
       // cout<<a<<endl;
       int a[3];
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
       for(int i=0;i<n;i++){
        if(a[i]==a[i+1]){
            cnt++;
        }
       }
    }
}