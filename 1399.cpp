#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n,ct=0;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ct=0;
        int min=0;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        min=a[0];
        for(int i=1;i<n;i++)
        {
            if((a[i]-min)<=1)
            {
                min=a[i];
                ct++;
            }
        }
        if(ct==n-1)
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }
    }
}