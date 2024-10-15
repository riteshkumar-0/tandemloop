#include <bits/stdc++.h>
using namespace std;

map<int, int> countMultiples(const vector<int> &numbers)
{
    map<int, int> multipleCount;

    for (int i = 1; i <= 9; i++)
    {
        multipleCount[i] = 0;
    }

    for (int num : numbers)
    {
        for (int i = 1; i <= 9; i++)
        {
            if (num % i == 0)
            {
                multipleCount[i]++;
            }
        }
    }

    return multipleCount;
}

int main()
{
    int n;
    cout << "Enter the size of the list: ";
    cin >> n;

    vector<int> numbers(n);
    cout << "Enter the numbers:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    map<int, int> result = countMultiples(numbers);

    cout << "{";
    for (int i = 1; i <= 9; i++)
    {
        cout << i << ": " << result[i];
        if (i < 9)
        {
            cout << ", ";
        }
    }
    cout << "}" << endl;

    return 0;
}