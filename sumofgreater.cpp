#include<bits/stdc++.h>
using namespace std;
int main(){
   // vector<int>ans;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

for(int i=0;i<n;i++){
    int sum=0;
    for(int j=0;j<n;j++){
         if(a[i]<a[j]){
            sum+=a[j];
         }

    }
    
    cout<<sum<<" ";
   
}
}