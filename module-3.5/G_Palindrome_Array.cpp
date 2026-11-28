#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int i = 0, j = n - 1, is = 1;

    while (i < j)
    {
        if (a[i] != a[j])
        {
            is = -1;
            break;
        }

        i++;
        j--;
    }

    if (is == 1)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}