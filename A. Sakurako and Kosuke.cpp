//https://codeforces.com/contest/2033/problem/A
#include <iostream>
using namespace std;

string game_winner(int n)
{
    int x = 0;
    int move_number = 1;

    while (true)
    {
        int move_distance = 2 * move_number - 1;

        if (move_number % 2 == 1)
        {
            x -= move_distance;
            if (abs(x) > n)
            {
                return "Sakurako";
            }
        }
        else
        {
            x += move_distance;
            if (abs(x) > n)
            {
                return "Kosuke";
            }
        }

        move_number++;
    }
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        int n;
        cin >> n;
        cout << game_winner(n) << endl;
    }

    return 0;
}
