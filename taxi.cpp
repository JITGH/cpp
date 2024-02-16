#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string t;
    t+=toupper(s[0]);
    for(int i=1;i<s.size();i++){
        t+=tolower(s[i]);
    }
    cout<<t<<endl;
}