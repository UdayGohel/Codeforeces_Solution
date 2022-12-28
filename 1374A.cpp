#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, c,p;
        cin >> a >> b >> c;
        p = c - c % a + b;
        if (p <= c)
        {
            cout << p << endl;
        }
        else
        {
            if (c % a == b)
            {
                cout << c << endl;
            }
            else
            {
                cout << (c - c % a - (a - b)) << endl;
            }
        }
        
    }
}