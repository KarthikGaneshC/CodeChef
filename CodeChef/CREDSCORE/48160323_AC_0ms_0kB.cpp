#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n>=0 && n<=1000){
    
       if(n>=750){
           cout<<"yes"<<endl;
       }
       else{
        cout<<"no"<<endl;
       }
    }
    return 0;
}