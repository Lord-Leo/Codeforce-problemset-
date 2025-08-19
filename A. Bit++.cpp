#include<iostream>
using namespace std;

int main()
{
    int A,x=0;
    string n;
    cin >>A;

    for(int i=0; i<A; i++)
    {
        cin>> n;
        if(n[1]== '+')
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    cout << x << endl;
    return 0;
}
