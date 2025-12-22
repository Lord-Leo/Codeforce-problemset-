//https://leetcode.com/problems/coin-change/description/
#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

vector<int> readCoins(int n) {
    vector<int> coins(n);
    for (int i = 0; i < n; i++)
    {
        double x;
        cin >> x;
        coins[i] = x;
    }
    return coins;
}

/* Solve minimum coin problem using DP */
int minCoinsDP(int x, const vector<int>& coins) {
    vector<int> dp(x + 1, INF);
    dp[0] = 0;

    for (int coin : coins)
    {
        for (int i = coin; i <= x; i++)
        {
            dp[i] = min(dp[i], dp[i - coin] + 1);
        }
    }

    return (dp[x] == INF) ? -1 : dp[x];
}

int main()
{

    int n,x;
    cin >> n >> x;

    vector<int> coins = readCoins(n);
    int answer = minCoinsDP(x, coins);
    cout << answer << endl;

    return 0;
}
