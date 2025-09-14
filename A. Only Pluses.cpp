//https://codeforces.com/contest/1992/problem/A
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a,b,c;
        cin >> a>>b>>c;
        int max_bananas = 0;
        for (int i=0; i<=5; i++)
        {
            for (int j=0; j<=5-i; j++)
            {
                int k = 5-i-j;
                int new_a = a+i;
                int new_b = b+j;
                int new_c = c+k;
                max_bananas = max(max_bananas, new_a * new_b * new_c);
            }
        }
        cout << max_bananas << endl;
    }
    return 0;
}
