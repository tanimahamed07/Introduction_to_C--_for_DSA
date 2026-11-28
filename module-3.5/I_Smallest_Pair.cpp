
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int tc = 0; tc < t; tc++)
    {
        int n;
        cin >> n;

        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int min_val = INT_MAX;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int x = a[i] + a[j] + j - i;

                if (min_val > x)
                {
                    min_val = x;
                }
            }
        }

        cout << min_val << endl;
    }

    return 0;
}
