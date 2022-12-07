#include <iostream>
using namespace std;

int main()
{
    int t, a, b, ct = 0;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (a + 1 < b)
        {
            ct++;
        }
    }
    cout << ct << endl;
}