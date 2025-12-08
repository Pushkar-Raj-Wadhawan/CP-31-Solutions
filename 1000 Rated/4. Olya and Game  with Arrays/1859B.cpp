#include<bits/stdc++.h>
using namespace std;

using number = unsigned long long;

#define faster() ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main(void)
{
    faster();
    number t; cin >> t;
    while(t--)
    {
        number n; cin >> n;
        vector<vector<number>> v;
        vector<number> potential;
        number minPotentialArray, minPotential = INT_MAX;
        number minCurr = INT_MAX, ans = 0;
        for(number i = 0; i < n; i++)
        {
            number m; cin >> m;
            v.emplace_back(m);
            for(number j = 0; j < m; j++)
            {
                cin >> v[i][j];
            }
            sort(v[i].begin(), v[i].end());
            minPotential = min(minPotential, v[i][1]);
            minCurr = min(minCurr, v[i][0]);
            ans += v[i][1];
            number ans = 0;
        }

        ans -= minPotential;
        ans += minCurr;

        cout << ans << endl;
    }
}
