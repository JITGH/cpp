
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x[n],y[n];
        int c=0;
        //int sumy=0;
	    for(int i=0;i<n;i++){
	        cin>>x[i];
           // sumx+=x[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>y[i];
            // sumy+=y[i];Bx[i]+y[n-i]
	    }
	    //sort(y,y+n);
       // int sum=(sumx+sumy)/2;
        for(int i=1;i<=n;i++){
            if((x[i]+y[n-i])==(x[i-1]+y[n-i-1])){
                c++;
            }
        }
        cout<<c<<endl;
        if(c==n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}