#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n>=100 && n<=169){
       if(n+7>170){
           cout<<"yes"<<endl;
       }
       else{
        cout<<"no"<<endl;
        }
    }
    return 0;
}