#include<bits/stdc++.h>
using namespace std;
int main ()
{
    // int n ;
    // cin>>n;
    // if(n%4==0 || n%7==0 || n%44==0|| n%47==0 || n%74==0 ||n%77==0 || n%444==0 || n%447==0 || n%474==0 || n%744==0 || n%477==0 || n%747==0 || n%774==0 || n%777==0 )
    // {
    //     cout<<"YES";
    // }
    // else
    //     {
    //     cout<<"NO";
    // }
    long long  n,k;
    cin>>n>>k;
    if(k<=(n+1)/2){
        cout<<k*2-1;
    }
    else{
        cout<<(k-(n+1)/2)*2;
    }
    return 0;
}