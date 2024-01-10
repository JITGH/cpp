#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
int c1=0;
int c2=0;
cin>>s;
for(int i=0;i<s.length();i++){
    if(s[i]>='A' && s[i]<='Z'){
        c1++;
    }
    else{
        c2++;
    }
}
if(c1>c2){
char ch;
for(int i=0;i<s.length();i++){
    ch=toupper(s[i]);
    cout<<ch;
}
cout<<endl;
}
else{
    char ch;
for(int i=0;i<s.length();i++){
    ch=tolower(s[i]);
    cout<<ch;
}
}

//cout<<c1<<" "<<c2;
}