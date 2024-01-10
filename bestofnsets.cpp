#include <iostream>
#include <valarray>

using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	 //   cout<<x+y<<endl;
	 int diff=abs(x-y);
    // cout<<diff<<"\n";
    // cout<<x+y<<endl;
     cout<<(x+y)+diff-1<<endl;
	 
	}
	return 0;
}
