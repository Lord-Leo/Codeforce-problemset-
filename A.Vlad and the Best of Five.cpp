//https://codeforces.com/contest/1926/problem/A
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string str;
        cin >> str;

        int countA = count(str.begin(), str.end(), 'A');
        int countB = count(str.begin(), str.end(), 'B');

        if (countA > countB)
        {
            cout << "A" << endl;
        }
        else if (countA < countB)
        {
            cout << "B" << endl;
        }
    }

    return 0;
}
