#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char a[8];
        for(int i=0;i<8;i++){
            cin>>a[i];
        }
        // for(int i=0;i<8;i++){
        //     if(i%2==0){
        //         if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'){
        //             cout<<"NO"<<endl;
        //             break;
        //         }
        //         else{
        //             cout<<"YES"<<endl;
        //             break;
        //         }
        //     }
           
        //     }
        if(a[0]=='A'||a[0]=='E'||a[0]=='O'||a[0]=='I'||a[0]=='U'&&a[2]=='A'||a[2]=='E'||a[2]=='O'||a[2]=='I'||a[2]=='U'&& a[4]=='A'||a[4]=='E'||a[4]=='O'||a[4]=='I'||a[4]=='U'&& a[6]=='A'||a[6]=='E'||a[6]=='O'||a[6]=='I'||a[6]=='U'&& a[7]=='A'||a[7]=='E'||a[7]=='O'||a[7]=='I'||a[7]=='U'){
            cout<<"NO"<<endl;
        }
        else if(a[1]=='A'||a[1]=='E'||a[1]=='O'||a[1]=='I'||a[1]=='U'&& a[3]=='A'||a[3]=='E'||a[3]=='O'||a[3]=='I'||a[3]=='U'&& a[5]=='A'||a[5]=='E'||a[5]=='O'||a[5]=='I'||a[5]=='U'){
            cout<<"YES"<<endl;
        }
        }
    }
    