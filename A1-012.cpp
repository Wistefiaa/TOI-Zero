#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,r;
    string n;
    char s;
    cin>>n>>s;
    cout<<n<<' '<<s<<' ';
    t = stoi(n);
    reverse(n.begin(), n.end());
    r = stoi(n);
    if(s == '+'){
        t += r;
        cout<<r<<' '<<'='<<' '<<t;
    }
    else if(s == '*'){
        t *= r;
        cout<<r<<' '<<'='<<' '<<t;
    }
}