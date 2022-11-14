#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    string a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a[1] == '+')
        {
            count++;
        }
        else{
            count--;
        }
    }
    cout << count << endl;
    return 0;
}