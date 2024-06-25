#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    long int n;
    long int t,j,k;
    cin>>n;
    if(n>=1 && n<=100){
    while(n--){
        cin>>t;
        
        j=1;
        for(int i=0; i<t; i++){
            
            cin>>k;
            if(k<=15)
            j=j*k;
        }
        cout<<j<<endl;
}
    }
    return 0;
}