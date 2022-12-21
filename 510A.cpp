#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            for (int j = 1; j <= t; j++)
            {
                cout << "#";
            }
        }
        else
        {
            if (i % 4 == 0)
            {
                cout << "#";
                for (int j = 1; j < t; j++)
                {
                    cout << ".";
                }
            }
            else
            {

                for (int j = 1; j < t; j++)
                {
                    cout << ".";
                }
                cout << "#";
            }
        }
        cout << endl;
    }
}