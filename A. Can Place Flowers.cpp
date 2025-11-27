//https://leetcode.com/problems/can-place-flowers/description/
#include<bits/stdc++.h>
using namespace std;

bool canplaceflowerbed(vector<int> &fb, int n){
    int m =fb.size();
    for(int i=0; i<m && n>0; i++)
    {
        if(fb[i]==0)
        {
            bool emleft = (i==0 || fb[i-1]==0);
            bool emright = (i==m-1 || fb[i+1]==0);
            if(emleft && emright)
            {
                fb[i]=1;
                n--;
            }
        }
    }
    return n==0;
}

int main()
{
    int size,n;
    cin>>size;
    vector<int>fb(size);

    for(int i=0; i<size; i++)
    {
        cin >>fb[i];
    }
    cin >> n;
    bool result = canplaceflowerbed(fb,n);
    cout << (result ? "true" : "false") << endl;
    return 0;
}
