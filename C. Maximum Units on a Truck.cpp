//https://leetcode.com/problems/maximum-units-on-a-truck/description/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    //static int maximumUnits(vector<vector<int>>& boxTypes, int truckSize)
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize)
    {

        // Sort by unitsPerBox in descending order
        sort(boxTypes.begin(), boxTypes.end(),
            [](const vector<int>& a, const vector<int>& b) {
                return a[1] > b[1];
            });

        int totalUnits = 0;

        for (auto &box : boxTypes)
        {
            int numberOfBoxes = box[0];
            int unitsPerBox   = box[1];

            if (truckSize == 0)
                break;

            int take = min(numberOfBoxes, truckSize);

            totalUnits += take * unitsPerBox;
            truckSize  -= take;
        }

        return totalUnits;
    }
};

int main()
{
    int n, truckSize;
    cin >> n >> truckSize;

    vector<vector<int>> boxTypes(n, vector<int>(2));

    for (int i = 0; i < n; i++) {
        cin >> boxTypes[i][0] >> boxTypes[i][1];
    }

    Solution obj;
    cout << obj.maximumUnits(boxTypes, truckSize) << endl;
    //cout << Solution::maximumUnits(boxTypes, truckSize) << endl; if i used static i would use this


    return 0;
}
