#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int digit=0;
    int r=0;
    int c=0;
    while(n>0){
        r=n%10;
        if(r==4||r==7){
            c++;
        }
        n=n/10;
        digit++;
    }
    
   // cout<<c<<" "<<digit;
   if(digit==c) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
}