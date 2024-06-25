#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int main() {
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       int a[n];
       
       for(int j=0; j<n; j++){
           cin>>a[j];
       }
       int neg = 0;
        int zero = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i] == 0)
            {
                zero++;
            }
            else if(a[i] < 0)
            {
                neg++;
            } 
        }
        
        if((zero > 0) || (neg%2 == 0))
        {
            cout << 0 << endl;
        }
        
        else
        {
            cout << 1 << endl;
        }
        
   }
    return 0;
}