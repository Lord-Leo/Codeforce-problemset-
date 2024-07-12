#include<iostream>
using namespace std;

int main()
{
    int n,x,y,z,per=0;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin>> x>>y>>z;
        if(x+y+z >=2)
        {
            per++;
        }
    }
    cout << per << endl;

    return 0;
}
