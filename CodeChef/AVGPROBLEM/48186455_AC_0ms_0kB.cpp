#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    float a,b,c;
    cin>>n;
    while(n--){
        cin>>a>>b>>c;
        float x=((a+b)/2);
        if(x>c){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}