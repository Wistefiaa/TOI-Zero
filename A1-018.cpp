#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>9||n==0) cout<<"Error : Out of range";
    else if(n<0) cout<<"Error : Please input positive number";
    else{
        if(n>5){
            cout<<"V";
            n -= 5;
            if(n==4){
                cout<<"IV";
                goto a;
            }
            else{
                if(n==1){
                    cout<<"I";
                    goto a;
                }
                else {
                    for(int i=0; i<3; i++){
                    if(n-i!=0) cout<<'I';
                    }
                }
            }
        }
        else if(n==5){
            cout<<"V";
            goto a;
        }
        else{
            if(n==4){
            cout<<"IV";
            goto a;
            }
            else{
                if(n==1){
                    cout<<"I";
                    goto a;
                }
                else{
                    for(int i=0; i<3; ++i){
                    if(n-i!=0) cout<<'I';
                    }
                }
            }
        }
    }
    a:
    return 0;
}