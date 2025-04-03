#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int y1,d1,m1,y2,d2,m2;
    cin>>y1>>m1>>d1;
    cin>>y2>>m2>>d2;
    if(y1!=y2){
        if(y1>y2){
            cout<<'2';
        }
        else cout<<'1';
    }
    else if(m1!=m2){
        if(m1>m2) cout<<'2';
        else cout<<'1';
    }
    else if(d1!=d2){
        if(d1>d2) cout<<'2';
        else cout<<'1';
    }
    else cout<<'0';
}