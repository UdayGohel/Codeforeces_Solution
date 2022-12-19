#include <string.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ct = 0, b = 97;
    ;
    cin >> n;
    char a[n];
    
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i]<='Z' && a[i]>='A')
            {
                a[i]=a[i]+32;
            }
        }
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            if (a[i] == b)
            {
                ct++;
                b++;
            }
        }
        if (ct >= 26)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    
    return 0;
}