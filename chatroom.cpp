#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    cin>>s1;
    string s2="hello";
    int c=0;
    int i=0;
  //  for(int i=0;i<s2.size();i++){
        for(int j=0;j<s1.size();j++){
            if(s2[i]==s1[j]){
                i++;
                c++;
            }
        }
    
    if(c>=5){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}