#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int j=0;
    int k=0;
    for(int i=0;i<=n;i++){
        for( j=0;j<=n;j++){
            for( k=0;k<=n;k++){
                if(i+j+k<=n){
               // continue;
                //}
                //else{
                     cout<<i<<" "<<j<<" "<<k<<endl;
                }
            }
           
        }
        
    }
}