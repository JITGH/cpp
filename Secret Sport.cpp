#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int c=0;
        int c1=0;
        for(int i=0;i<n;i++){
            if(a[i]=='A'){
                c++;
            }
            else if(a[i]=='B'){
                c1++;
            }
        }
        if(c>c1) cout<<"A"<<endl;
        else if(c<c1) cout<<"B"<<endl;
        else cout<<"?"<<endl;
    }
}