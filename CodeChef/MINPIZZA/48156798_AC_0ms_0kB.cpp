#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n][2];
    int i,j;
    for(i=0; i<n; i++){
        for(j=0; j<2; j++){
            cin>>a[i][j];
        }
    }
//logic
    for(i=0; i<n; i++){
       float x=0.0;
       float y=0.0;
       float k;
       k=a[i][0]*a[i][1];
       x=k/4;
       
       cout<<ceil(x)<<endl;
    }
    

    return 0;
}