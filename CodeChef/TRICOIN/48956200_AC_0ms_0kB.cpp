
#include <iostream>
using namespace std;
int main() {
   int m;
   cin>>m;
   while(m--){
       long n,t=0,c=0,i;
       cin>>n;
      t=0;
           
       for( i=1; i<n; i++){
           t=t+i+1;
           if(n<=t){
               //cout<<i<<endl;
               break;
           }
         
         
       }
       if(n==1){
           cout<<1<<endl;
       }
       else{
           cout<<i<<endl;
       }
      
       
   }
   

    return 0;
}