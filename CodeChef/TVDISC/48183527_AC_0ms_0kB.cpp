#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    while(n--){
        int a[4];
        for(int i=0; i<4; i++){
            cin>>a[i];
        }
        if((a[0]-a[2])<(a[1]-a[3])){
            cout<<"first"<<endl;
        }
        else if((a[0]-a[2])>(a[1]-a[3])){
            cout<<"Second"<<endl;
        }
        else{
            cout<<"any"<<endl;
        }
        
    }

    return 0;
}
