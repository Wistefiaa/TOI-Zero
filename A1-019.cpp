#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int n;
    for(int i=0; i<3; ++i){
        cin>>n;
        v.push_back(n);
    }
    sort(v.begin(), v.end());
    if(v[0]==v[2]) cout<<"all the same";
    else if(v[0]==v[1]||v[1]==v[2]) cout<<"neither";
    else cout<<"all different";
}