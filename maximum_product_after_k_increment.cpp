// CODE BY : AJAY PAL , IIT (BHU)
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

class Solution
{
public:
    int maximumProduct(vector<int> &a, int k)
    {
        int m = 1e9 + 7;
        int n = a.size();
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < n; i++)
        {
            pq.push(a[i]);
        }

        while (k--)
        {
            int x = pq.top();
            x++;
            pq.pop();
            pq.push(x);
        }

        long long int pro = 1;

        while (!pq.empty())
        {
            int tp = pq.top();
            pro = (pro * tp) % m;
            pq.pop();
        }

        return pro;
    }
};