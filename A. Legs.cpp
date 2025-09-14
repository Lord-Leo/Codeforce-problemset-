//https://codeforces.com/contest/1996/problem/A
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int cows = n / 4;
        int legs_Left = n % 4;

        int chickens = legs_Left / 2;

        int total_Animals = cows + chickens;

        cout << total_Animals << endl;
    }

    return 0;
}
