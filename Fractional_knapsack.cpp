// https://practice.geeksforgeeks.org/problems/fractional-knapsack-1587115620/1?page=1&status[]=unsolved&category[]=Greedy&sortBy=submissions
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item
{
    int value;
    int weight;
};

// } Driver Code Ends
// class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

class Solution
{
public:
    // Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        vector<pair<double, int>> v; // pair of ratio and index

        for (int i = 0; i < n; ++i)
        {
            double ratio = (arr[i].value * 1.0) / (arr[i].weight * 1.0);
            v.push_back({ratio, i});
        }
        sort(v.begin(), v.end(), greater<pair<double, int>>());
        int twt = 0;
        double ans = 0;
        for (int i = 0; i < n; ++i)
        {
            int index = v[i].second;
            int wt = arr[index].weight;

            if (twt + wt < W)
            {
                ans += arr[index].value;
                twt += wt;
            }
            else
            {
                double x = (W - twt) * 1.0;
                ans += x * v[i].first;
                break;
            }
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    // taking testcases
    cin >> t;
    cout << setprecision(2) << fixed;
    while (t--)
    {
        // size of array and weight
        int n, W;
        cin >> n >> W;

        Item arr[n];
        // value and weight of each item
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i].value >> arr[i].weight;
        }

        // function call
        Solution ob;
        cout << ob.fractionalKnapsack(W, arr, n) << endl;
    }
    return 0;
}
// } Driver Code Ends