#include<bits/stdc++.h>
using namespace std;
int main(){
    char s1,s2,t1,t2;
    cin>>s1>>s2;
    cin>>t1>>t2;
    int a=(s1-'A');
    int b=(s2-'A');
    int c=(t1-'A');
    int d=(t2-'A');
    //cout<<a;
   // ,,cout<<a<<" "<<b<<" "<<c<<" "<<d<<" ";
   int e=abs(a-b);
   int f=abs(c-d);
   if(e==f){
    cout<<"Yes";
   }
   else{
    cout<<"No";
   }
}