#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cout << "Enter an integer a: ";
    cin >> a;
    int limit = (a % 2 == 0) ? a - 1 : a;
    int number = 1;
    for (int i = 1; i <= limit; i++)
    {
        cout << number;
        if (i < limit)
        {
            cout << ", ";
        }
        number += 2;
    }
    cout << endl;

    return 0;
}