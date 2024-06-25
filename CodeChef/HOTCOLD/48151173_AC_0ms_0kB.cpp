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
        if(a[i]>20){
           cout<<"HOT"<<endl;
        }
        else{
            cout<<"COLD"<<endl;
        }
       
    }
   
   
   
    return 0;
}