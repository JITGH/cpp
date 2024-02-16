#include <bits/stdc++.h>
using namespace std;

int main() {
  // int a;
  // cin >> a;

 
  // cout << __builtin_ctz (a) << endl;
  int t;
  cin>>t;
  while(t--){
    // int x[4],y[4];
    // for(int i=0;i<4;i++){
    //   cin>>x[i]>>y[i];
    // }
    // sort(x,x+4);
    // sort(y,y+4);
    // int ans=abs(x[0]-x[3]);
    // int ans1=abs(y[0]-y[3]);
    // cout<<ans*ans1<<endl;
    int n;
    cin>>n;
    string s;
    string t;
    cin>>s;
    cin>>t;
    int c1=0;
    int c2=0;
    for(int i=0;i<n;i++){
      if(s[i]==t[i]){
        continue;
      }
      if(s[i]=='1'){
        c1++;
      }
       if(t[i]=='1'){
        c2++;
      }

    }
    cout<<max(c1,c2)<<endl;
  }

}
