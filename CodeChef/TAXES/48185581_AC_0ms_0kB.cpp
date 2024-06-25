#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int n,x;
    cin>>n;
    while(n--){
        cin>>x;
        if(x>100){
            x-=10;
        }
        cout<<x<<endl;
    }
    
    return 0;
}