#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        string str;
        cin>>s;
        cin>>str;
        for(int i=0;i<s.size();i++){
            if(s[i]=='B'){
                s[i]='G';
            }
        }
        cout<<((s==str)?"YES":"NO")<<endl;
    }
}