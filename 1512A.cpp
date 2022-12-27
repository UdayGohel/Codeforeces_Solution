#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int t, c,m;
        cin >> t;
        int b[t],a[t];
        for (int i = 0; i < t; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b,b+t);
        if(b[0]!=b[1])
        {
            m = b[0];  
        }
        if(b[t-2]!=b[t-1])
        {
            m = b[t-1];
        }
        for(int i=0;i<t;i++)
        {
            if(m==a[i])
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }
    return 0;
}