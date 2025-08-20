#include<iostream>
using namespace std;

int main()
{
    int n,k,s[100],a=0;
    cin >> n>>k;

    for(int i=0; i<n; i++)
    {
        cin >> s[i];
        if(s[i]>=s[k-1] && s[i]>0)
        {
            a++;
        }
    }
    cout << a << endl;

    return 0;
}
