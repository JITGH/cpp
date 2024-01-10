#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t-->0){
	    int x,y,k;
	    cin>>x>>y>>k;
	    if(x==y){
	        cout<<x+y<<endl;
	    }else{
	        while(k>0 && x!=y){
	            int a = x;
	            x = max(x,y);
	            y = min(a,y);
	            
	            x = __gcd(x,y);
	            
	            y = (y*x)/x;
	            k--;
	            
	        }
	        
	        cout<<x+y<<endl;
	    }
	}
	return 0;
}