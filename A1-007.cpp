#include<bits/stdc++.h>
using namespace std;
int main(){
    char c;
    vector<char> v = {'a','e','i','o','u'};
    cin>>c;
    for(auto x:v){
        if(x == c){
            cout<<"yes";
            goto a;
        }    
    }
    cout<<"no";
    a:
    return 0;
}