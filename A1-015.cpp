#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    if(s1.length()>5&&s2.length()>5){
        cout<<s1.substr(0,2)<<s2.substr(s2.length()-1,1)<<s3.substr(s3.length()-1,1);
    }
    else{
        cout<<s1.substr(0,1)<<s3<<s2.substr(s2.length()-1,1);
    }
}