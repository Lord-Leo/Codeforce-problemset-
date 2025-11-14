//https://leetcode.com/problems/first-bad-version/description/
#include <iostream>
using namespace std;

int bad;

bool isBadVersion(int version){
    return version>=bad;
}

int firstBadVersion(int n)
{
    int left = 1, right = n;
    while (left<right)
    {
        int mid = left+(right-left)/2;
        if (isBadVersion(mid))
            right = mid;
        else
            left = mid+1;
    }
    return left;
}

int main()
{
    int n;
    cout << "Enter total versions: ";
    cin >> n;

    cout << "Enter first bad version: ";
    cin >> bad;

    cout << "The first bad version is: " << firstBadVersion(n) << endl;

    return 0;
}
