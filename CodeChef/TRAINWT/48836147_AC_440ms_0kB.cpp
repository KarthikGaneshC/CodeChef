#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    
    while(n--){
        long k=0;
        long t,i,j=0;
        cin>>t;
        long a[t];
        for(i=0; i<t; i++){
            cin>>a[i];
            j=j+a[i];
            
        }
        long m;
        cin>>m;
        
        while(m--){
            long s,e,w;
            
            cin>>s>>e>>w;
            k+=(e-s+1)*w;
            
            
        }
        k=k+j;
       
       cout<<k<<endl; 
    }
    

    return 0;
}