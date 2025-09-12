//https://codeforces.com/contest/1955/problem/A
#include<iostream>
using namespace std;

int mincost(int n, int a, int b)
{
    int ind=n*a;
    int pair=n/2;
    int rem=n%2;
    int pro=pair*b+rem*a;
    return min(ind,pro);
}
int main()
{
    int t,n,a,b;
    cin >>t;
    for(int i=0; i<t; i++)
    {
        cin >>n>>a>>b;
        cout << mincost(n,a,b) << endl;
    }
    return 0;
}
