#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string d,id;
    char c,ic;
    c = 'H';
    d = "4567";
    cin>>ic>>id;
    if(ic == c&& id == d) cout<<"safe unlocked";
    else if(ic != c&& id==d) cout<<"safe locked - change char";
    else if(id!=d&& ic==c ) cout<<"safe locked - change digit";
    else cout<<"safe locked";
}