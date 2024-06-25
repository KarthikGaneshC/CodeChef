#include <iostream>
using namespace std;
int main() {
    int n,a,t,b;
    cin>>n;
    while(n--){
        cin>>a>>b;
        t=0;
        for(int i=a; i<=b; i++){
            if(i%10==2 || i%10==3 || i%10==9){
                t++;
            }
        }
        cout<<t<<endl;
    }

    return 0;
}