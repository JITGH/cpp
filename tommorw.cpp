#include<bits/stdc++.h>
using namespace std;
int main(){
    int M,D;
    cin>>M>>D;
    int y,m,d;
    cin>>y>>m>>d;
    if(M>=m && D>=d){
        d+=1;
        if(d>D){
            d=1;
            m+=1;
        }
        if(m>M){
            m=1;
            y+=1;
        }
    }
    cout<<y<<" "<<m<<" "<<d<<endl;
}