#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cout << "Enter an integer a: ";
    cin >> a;

    int number = 1;
    for (int i = 1; i <= a; i++)
    {
        cout << number;
        if (i < a)
        {
            cout << ", ";
        }
        number += 2;
    }
    cout << endl;

    return 0;
}