#include<bits/stdc++.h>
using namespace std;

#define faster() ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main(void)
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        int reqOps = INT_MAX;
        if(k == 4)
        {
            int evens = 0;
            for(int i = 0; i < n; i++)
            {
                int a; cin >> a;
                if(reqOps == 0) continue;

                if(a%4 == 0) reqOps = 0;
                else
                {
                    if(a%2 == 0) evens++;
                    reqOps = min(reqOps, 4 - (a%4));
                }
            }

            if(n > 1) reqOps = min(reqOps, 2 - min(2, evens));
        }
        else
        {
            for(int i = 0; i < n; i++)
            {
                int a; cin >> a;
                if(a%k == 0) reqOps = 0;
                if(reqOps != 0) reqOps = min (reqOps, k - (a%k));
            }
        }
        
        cout << reqOps << "\n";
    }
}
