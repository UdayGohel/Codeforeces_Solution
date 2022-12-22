#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, ct = 0, ct1 = 0;
    cin >> t;
    int a[t];
    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < t; i++)
    {
        if (a[i] > 0)
        {
            ct = ct + a[i];
        }
        if (a[i] < 0)
        {
            if (a[i] < 0 && ct == 0)
            {
                ct1++;
            }
            else
            {
                ct--;
            }
        }
    }
    cout << ct1 << endl;
}