#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int a,b,c,d,n;
    cin>>n;
    while(n--){
        cin>>a>>b;
        cin>>c>>d;
        if(c>=a && d>=b){
            cout<<"POSSIBLE"<<endl;;
        }
        else{
            cout<<"imPOSSIBLE"<<endl;
        }
    }
    return 0;
}