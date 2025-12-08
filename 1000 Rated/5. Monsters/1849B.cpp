#include<bits/stdc++.h>
using namespace std;

using number = long long;

#define faster() ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main(void)
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        vector<pair<number, int>> health(n);
        for(int i = 0; i < n; i++)  
        {
            cin >> health[i].first;
            health[i].second = i;
            if(k<health[i].first) health[i].first = health[i].first % k;
            if(health[i].first == 0) health[i].first+=k;
        }

        sort(health.begin(), health.end(),
        [](const pair<number, int> &a, pair<number, int> &b)
        {
            if(a.first == b.first) return a.second < b.second;
            return a.first > b.first;
        });
        for(int i = 0; i < n; i++)
        {
            cout << health[i].second+1 << " ";
        }
        cout << endl;


    }
}
