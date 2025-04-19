#include<bits/stdc++.h>
using namespace std;
#define ll long long



const int N = 1e5 + 7;

ll lcm(ll x, ll y)
{
    ll a = x, b = y;
    while(x % y)
    {
        ll z = x % y;
        x = y;y = z;
    }
    
    return a * b / y;
}

int main()
{
    int n;cin >> n;
    
    int h[N] = {0};
    for(int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    
    sort(h, h + n);
    
    double ans = -100;
    int a = 0, b = 0, c = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            for(int k = j + 1; k < n; k++)
            {
                ll t1 = lcm(h[i], h[j]);
                ll t2 = lcm(h[i], h[k]);
                ll t3 = lcm(h[k], h[j]);
                ll t4 = lcm(t1, h[k]);
                double s = h[i]*h[j]*h[k]*t4*1.0/(t1*t2*t3);
                
                if(s > ans)
                {
                    ans = s;a = h[i];b = h[j];c = h[k];
                }
            }
        }
    }
    
    cout << a << ' ' << b << ' ' << c;
    
    return 0;
}
