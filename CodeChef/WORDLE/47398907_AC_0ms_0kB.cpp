#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b,c="";
        cin>>a>>b;
        for(int i=0;i<5;i++)
        {
            if(a[i]==b[i])
            {
                c+='G';
            }
            else
            {
                c+='B';
            }

        }
        cout<<c<<endl;
    }

    return 0;
}