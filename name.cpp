#include<bits/stdc++.h>
using namespace std;
int main(){
    // string s;
    // cin>>s;
    int t;
    cin>>t;
    while(t--){
    string s="Timur";
    sort(s.begin(),s.end());
    int n;
    cin>>n;
    
    string str;
    cin>>str;
    sort(str.begin(),str.end());
    cout<<((str==s)?"YES":"NO")<<endl;;

}
}