#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n][3];
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cin>>a[i][j];
        }
    }
    for(int i=0; i<n; i++){
       if(a[i][1]-a[i][2]>=a[i][0]){
           cout<<"yes"<<endl;
       }
       else{
        cout<<"no"<<endl;
    }
    }
    return 0;
}