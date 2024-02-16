#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;
    string s="abcdefghijklmnopqrstuvwxyz";
    string str=s.substr(0,k);
    while(n--){
        cout<<str;
    }
    cout<<endl;
    }
}