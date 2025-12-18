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
        number n, k, q, count = 0, ways = 0; cin >> n >> k >> q;
        number temp;
        for(int i = 0; i < n; i++)
        {
            cin >> temp;
            if(temp <= q)
            {
                count++;
            }
            else
            {
                if(count >= k)
                {
                    for(int j = k; j <= count; j++)
                    {
                        ways += count - j + 1;
                    }
                }
                count = 0;
            }
        }
        if(count >= k)
        {
            for(int j = k; j <= count; j++)
            {
                ways += count - j + 1;
            }
        }
        cout << ways << endl;
    }
}
