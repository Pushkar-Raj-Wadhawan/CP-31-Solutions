#include<bits/stdc++.h>
using namespace std;

#define faster() ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main(void)
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        int f0 = 0, f1 = 0, cost = 0;
        for(int i = 0; i < s.size(); i++)
        {
            s[i] == '0' ? f0++ : f1++;
        }
        if(f0 == f1)
        {
            cout << "0\n";
            continue;
        }
        cost += abs(f0 - f1);
        f0 > f1 ? f0 = f1 : f1 = f0;
        int size = 2*f0;
        for(int i = 0; i < size; i++)
        {
            if(s[i] == '0')
            {
                if(f1 == 0)
                {
                    cost += f0;
                    break;
                }
                else f1--;
            }
            else
            {
                if(f0 == 0)
                {
                    cost += f1;
                    break;
                }
                else f0--;
            }
        }
        cout << cost << "\n";
    }
}
