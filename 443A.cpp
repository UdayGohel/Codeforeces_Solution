#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    getline(cin, a);
    sort(a.begin(), a.end());
    int ct = 0;
    for (int i = 0; i < a.size() - 1; i++)
    {
        if (a[i] == '{' || a[i] == ',' || a[i] == ' ' ||a[i] == '}')
        {
            continue;
        }
        else
        {
            if (a[i] != a[i + 1])
            {
                ct++;
            }
        }
    }
    cout << ct;
}