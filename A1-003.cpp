#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int max = INT_MIN;
    for(int i=0; i<3; ++i){
        cin>>n;
        if(n>max){
            max = n;
        }
    }
    cout<<max;
}