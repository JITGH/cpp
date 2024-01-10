#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n<k){
            cout<<n<<endl;
        }
        else{
           // while(n>=0){
             //   n-=k;
                cout<<n%k<<endl;
            //}
//cout<<n<<endl;
        }
    }
}
