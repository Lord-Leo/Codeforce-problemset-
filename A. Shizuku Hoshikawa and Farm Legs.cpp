//https://codeforces.com/contest/2171/problem/A
#include <bits/stdc++.h>
using namespace std;

int combinations(int n){
    int count = 0;
    for (int cows = 0; cows <= n / 4; cows++)
    {
        int remaining_legs = n - cows * 4;
        if (remaining_legs % 2 == 0)
            count++;
    }
    return count;
}

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout << combinations(n) << endl;
    }

    return 0;
}
