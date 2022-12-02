#include <iostream>
using namespace std;

int main()
{
    string a;
    cin >> a;
    int ct = 0, ct1 = 0;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == '\0')
        {
            break;
        }
        if (a[i] <= 'Z' && a[i] >= 'A')
        {
            ct++;
        }
        if (a[i] <= 'z' && a[i] >= 'a')
        {
            ct1++;
        }
    }
    if (ct1 >= ct)
    {
        // cout<<a<<endl;
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] <= 'z' && a[i] >= 'a')
            {
                continue;
            }
            if (a[i] == '\0')
            {
                break;
            }
            a[i] = a[i] + 32;
        }
        cout << a << endl;
    }
    else
    {
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] <= 'Z' && a[i] >= 'A')
            {
                continue;
            }

            if (a[i] == '\0')
            {
                break;
            }
            a[i] = a[i] - 32;
        }
        cout << a << endl;
    }
    return 0;
}