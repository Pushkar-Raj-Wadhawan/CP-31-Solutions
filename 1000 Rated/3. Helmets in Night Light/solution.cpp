#include<bits/stdc++.h>
using namespace std;

#define faster() ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main(void)
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        unsigned long long n, p; cin >> n >> p;
        vector<pair<unsigned long long, unsigned long long>> v(n);
        int a;
        for(int i = 0; i < n; i++)
        {
            cin >> a;
            v[i].first = a;
        }
        for(int i = 0; i < n; i++)
        {
            cin >> a;
            v[i].second = a;
        }
        sort(v.begin(), v.end(), [](auto &a, auto &b)
            { return a.second < b.second; });

        unsigned long long cost = p;
        int i = 0, j = 1;

        while(i < n)
        {
            if(v[i].second<p)
            {
                if(v[i].first < n - j)
                {
                    j += v[i].first;
                    cost += v[i].first*v[i].second;
                }
                else
                {
                    cost += v[i].second * (n-j);
                    break;
                }
                i++;
            }
            else
            {
                cost += p * (n-j);
                break;
            }
        }
        cout << cost << endl;
        
    }
}
