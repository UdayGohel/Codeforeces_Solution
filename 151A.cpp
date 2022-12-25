#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int a,b,x,ans;
    a=k*l;
    b=a/nl;
    c=c*d;
    x=p/np;
    ans=min(b,c);
    ans=min(ans,x);
    cout<<ans/n;
    
}