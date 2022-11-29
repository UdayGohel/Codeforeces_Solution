#include<iostream>
using namespace std;
int main()
{
int n, ct = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[i + 1])
        {
            ct++;
        }
    }
    cout << ct << endl;
}