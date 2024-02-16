#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int mini=INT_MAX;
int t;
cin>>t;
while(t--){
    int h,x,y1,y2,k;
    int c=0;
    int d=0;
    int a=0;
    int b=0;
    cin>>h>>x>>y1>>y2>>k;
     if(h%x==0){
        a=h/x;
     }
     else{
        a=(h/x)+1;
     }
   // cout<<a;
     b=(y1*k);
   // cout<<b;
    if(b>h){
       // c=ceil(h/b);
        //cout<<c;
        if(h%y1==0){
            c=h/y1;
        }
        else{
            c=(h/y1)+1;
        }
    }
    if(b=<h){
        int e=(h-b);
        if(e%y2==0) c=(e/y2)+k;
        else c=(e/y2)+1+k;
       // d=f+k;
    }
    
    // mini=min(a,min(c,d));
    cout<<min(a,c)<<endl;
    // cout<<c<<endl;
    // cout<<d<<endl;
}
}
