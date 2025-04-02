#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, t, f, tw, o;
    cin>>n;
    t = n/10;
    n = n-t*10;
    f = n/5;
    n = n-f*5;
    tw = n/2;
    n = n-tw*2;
    o = n;
    cout<<"10 "<<"= "<<t<<'\n';
    cout<<"5 "<<"= "<<f<<'\n';
    cout<<"2 "<<"= "<<tw<<'\n';
    cout<<"1 "<<"= "<<o<<'\n';
}