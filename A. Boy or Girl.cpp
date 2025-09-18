#include<iostream>
//#include<algorithm>
using namespace std;

int main()
{
    string s;
    cin >>s;
    int n = s.length();

    //this is bubble sort. I can use just an algorithm and short this code in one line
    //sort(s.begin(), s.end());-------------only can use this method when i use algorithm as header
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (s[i] > s[j]) {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    //here i remove the duplicates
    int distinct = 1;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] != s[i-1]) {
            distinct++;
        }
    }
    if (distinct % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
}
