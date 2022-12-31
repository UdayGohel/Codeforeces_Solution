#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    int t;
    cin>>t;
    while(t--)
    {
        int ct=0;
        cin>>a;
        if(a[0]=='y' || a[0]=='Y')
        {
            ct++;
        }
        if(a[1]=='e' || a[1]=='E')
        {
            ct++;
        }
        if(a[2]=='s' || a[2]=='S')
        {
            ct++;
        }
        if(ct==3)
        {
            cout<<"YES"<<endl;
        }
        if(ct<3)
        {
            cout<<"NO"<<endl;
        }
    }

}