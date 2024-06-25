#include <iostream>
#include<cmath>

using namespace std;

int main()
{
   int n;
   cin>>n;
   long int a[n];
   for(int i=0; i<n; i++){
       cin>>a[i];
   }
//lol
   for(int i=0; i<n; i++){
       long x;
       x=((a[i]*50)*0.3);
       cout<<x<<endl;
   }
    return 0;
}