#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int C=0;
        int A=0;
        int B=0;
        char a[3][3];
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin>>a[i][j];
            }
            }
        for(int i=0;i<3;i++){
                  //A=0,B=0,C=0;
            for(int j=0;j<3;j++){
                if(a[i][j]=='A'){
                    A++;
                }
                else if(a[i][j]=='B'){
                    B++;
                }
                else if(a[i][j]=='C'){
                    C++;
                }
            }

        }
         
       // cout<<A<<" "<<B<<" "<<C;
        if(A<3){
            cout<<"A"<<endl;
        }
        else if(B<3){
            cout<<"B"<<endl;
        }
        else{
            cout<<"C"<<endl;
        }
    }
}