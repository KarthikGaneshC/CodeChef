#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a[t];
    int i=00;
    for(i=0;i<t;i++){
        cin>>a[i];
    }
    for(i=0;i<t;i++){
        if((a[i]>=1)&&(a[i]<=4)){
           cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
       
    }
   
   
   
    return 0;
}
