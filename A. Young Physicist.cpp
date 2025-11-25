//https://codeforces.com/problemset/problem/69/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,z;
    int sumx = 0, sumy = 0, sumz = 0;
    cin>>n;
    while(n--)
    {
        cin>>x>>y>>z;
        sumx+=x;
        sumy+=y;
        sumz+=z;
    }
    cout << (sumx == 0 && sumy == 0 && sumz == 0 ? "YES" : "NO") << endl;

    return 0;
}
