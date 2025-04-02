#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,d;
    cin>>m>>d;
    if(m==1||m==2||m==3){
        if(d>=21){
            if(m%3==0){
                cout<<"spring";
            }
            else cout<<"winter";
        }
        else cout<<"winter";
    }
    else if(m==4||m==5||m==6){
        if(d>=21){
            if(m%3==0){
                cout<<"summer";
            }
            else cout<<"spring";
        }
        else cout<<"spring";
    }
    else if(m==7||m==8||m==9){
        if(d>=21){
            if(m%3==0){
                cout<<"fall";
            }
            else cout<<"summer";
        }
        else cout<<"summer";
    }
    else{
        if(d>=21){
            if(m%3==0){
                cout<<"winter";
            }
            else cout<<"fall";
        }
        else cout<<"fall";
    }
    return 0;
}