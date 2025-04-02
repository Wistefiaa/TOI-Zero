#include<bits/stdc++.h>
using namespace std;
int main(){
    int q, m, f;
    cin>>q>>m>>f;
    if(q<5){
        cout<<"fail";
        goto a;
    }
    if(m<20){
        cout<<"fail";
        goto a;
    }
    if(f<25){
        cout<<"fail";
        goto a;
    }
    cout<<"pass";
    a:
    return 0;
}