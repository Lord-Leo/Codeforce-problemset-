//https://codeforces.com/contest/1926/problem/C
#include <iostream>
#include <climits>
using namespace std;

int digit_sum(int n)
{
    int sum=0;
    for(n; n>0; n/=10)
    {
        sum+=(n%10);
    }
    return sum;
}
int main()
{
    int t;
    cin >> t;

    for (int i=0; i<t; i++)
    {
        int n;
        cin >>n;

        int sum=0;
        for (int i=1; i<=n; i++)
        {
            int digit_sum_i=digit_sum(i);
            sum+=digit_sum_i;
        }
        cout << sum << endl;
    }
    return 0;
}
