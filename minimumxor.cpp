#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int x=0;
    //int maxi=INT_MIN;
   
    int sum=0;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int mini=100000;
        for(int i=0;i<n;i++){
            cin>>a[i];
            x=x^a[i];
           // maxi=max(maxi,a[i]);
          // sum+=a[i];
        }
       //cout<<x<<endl;
       // int mini=x;
      if(x==0){
        cout<<"0"<<endl;
       }
     //  int mini =x;
       else{

        for(int i=0;i<n;i++){
           int res=x^a[i];
            mini=min(mini,res);
        }
        cout<<mini<<endl;
       } 
    //    for(int i=0;i<n;i++){
    //     if(x==a[i]){

    //     }
        //   if(x==0){
        //     cout<<x<<endl;
        //   }
        //   else{

        //   }
       }
    }

