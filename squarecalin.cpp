#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int sum=0;
        int c=0;
       long long  int n;
        cin>>n;
       long long  int a[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        for(long long int i=1;i<sum;i++){
            if(i*i==sum){
                //cout<<"YES"<<endl;
                //break;
                c++;
            }
          
        }
       // cout<<"NO"<<endl;
       if(c==1){
        cout<<"YES"<<endl;

       }
       else{
        cout<<"NO"<<endl;
       }
    }
}