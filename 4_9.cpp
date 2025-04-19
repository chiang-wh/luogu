#include<bits/stdc++.h>
using namespace std;
#define ll long long


////new_no1
const ll N = 99999999;

ll gcd(ll x, ll y)
{
	while(x != y)
	{
		if(x > y)
		{
			x = x - y;
		}
		else
		{
			y = y - x;
		}
	}
	
	return x;
}

int main()
{
	ll a = 343720, b = 233333;
	
	ll tmp1 = 15 * b;
	ll tmp2 = 17 * a;
	
	ll m = gcd(tmp1, tmp2);
	
	ll i = tmp1 / m;
	ll j = tmp2 / m;
	
	double ans = sqrt(1.0*a*i*a*i+1.0*b*j*b*j) * 2;
	cout << fixed << setprecision(2) << ans << endl;
	
	return 0;
}



////no7 
//const int N = 1e3 + 7;
//
//int main()
//{
//	int n;cin >> n;
//	
//	int a[N] = {0}, sum[N] = {0};
//	for(int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//		sum[i] = sum[i-1] + a[i];
//	}
//	
//	int ans = 999999;
//	for(int i = 1; i < n; i++)
//	{
//		for(int j = i; j < n; j++)
//		{
//			for(int k = j + 1; k <= n; k++)
//			{
//				for(int l = k; l <= n; l++)
//				{
//					int tmp1 = sum[j] - sum[i-1];
//					int tmp2 = sum[l] - sum[k-1];
//					ans = min(ans, abs(tmp1-tmp2));
//				}
//			}
//		}
//	}
//	
//	cout << ans;
//	
//	return 0;
//}



////no6
//const int N = 17; 
//
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//	
//	int a[N][N] = {0};
//	for(int i = 0; i < n; i++)
//	{
//		for(int j = 0; j < n; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	
//	cout << 41255214;
//	
//	return 0;
//}



////no5
//const int N = 1e5 + 7;
//
//ll lcm(ll x, ll y)
//{
//	ll a = x, b = y;
//	while(x != y)
//	{
//		if(x > y)
//		{
//			x = x - y;
//		}
//		else
//		{
//			y = y - x;
//		}
//	}
//	
//	return a * b / x;
//}
//
//int main()
//{
//	int n;cin >> n;
//	
//	int h[N] = {0};
//	for(int i = 0; i < n; i++)
//	{
//		cin >> h[i];
//	}
//	
//	double ans = 0;
//	int a = 0, b = 0, c = 0;
//	for(int i = 0; i < n; i++)
//	{
//		for(int j = i + 1; j < n; j++)
//		{
//			for(int k = j + 1; k < n; k++)
//			{
//				ll t1 = lcm(h[i], h[j]);
//				ll t2 = lcm(h[i], h[k]);
//				ll t3 = lcm(h[k], h[j]);
//				ll t4 = lcm(t1, h[k]);
//				double s = h[i]*h[j]*h[k]*t4*1.0/(t1*t2*t3);
//				
//				if(s > ans)
//				{
//					ans = s;a = h[i];b = h[j];c = h[k];
//				}
//			}
//		}
//	}
//	
//	cout << a << ' ' << b << ' ' << c;
//	
//	return 0;
//}



////no4
//ll func(int base, int n)
//{
//	ll res = 1;
//	
//	while(n)
//	{
//		if(n % 2 == 1)
//		{
//			res *= base;
//		}
//		base = base * base;
//		n = n / 2;
//	}
//	
//	return res;
//}
//
//
//int main()
//{
//	int n;
//	double d;
//	cin >> n >> d;
//	
//	double ans;
//	ll tmp = func(2, n);
//	ans = d * tmp;
//	
//	cout << round(ans);
//	
//	return 0;
//}



////no3
//bool func(int x)
//{
//	int flag = 0;
//	while(x)
//	{
//		int tmp;
//		tmp = x % 10;
//		
//		if(flag == 0)
//		{
//			if(tmp % 2 == 0) return false;
//			flag = 1;
//		}
//		
//		else if(flag == 1)
//		{
//			if(tmp % 2 == 1) return false;
//			flag = 0;
//		}
//		 
//		x = x / 10;
//	}
//	return true;
//}
//
//int main()
//{
//	int n;cin >> n;
//	
//	int ans = 0;
//	for(int i = 1; i <= n; i++)
//	{
//		if(func(i)) ans++;
//	}
//	
//	cout << ans;
//	
//	return 0;
//}



////no2
//int main()
//{
//	double a = 233333, b = 343720;
//	
//	double x = 15 * a / 17;
//	
//	double ans = 0;
//	
//	ans += sqrt(a * a + x * x);
//	ans += sqrt(a * a + x * x);
//	
//	double y = 17*(b-x) / 15;
//	
//	ans += sqrt((b-x)*(b-x) + y*y);
//	ans += sqrt((b-x)*(b-x) + y*y);
//	
//	double n_x = 15 * (a - y) / 17;
//	ans += sqrt((a-y)*(a-y) + n_x*n_x);
//	ans += sqrt((a-y)*(a-y) + n_x*n_x);
//	
//	ans += sqrt(a * a + x * x);
//	
//	printf("%.4f\n", ans);
//	
//	return 0;
//}



//no1
//int main()
//{
//	int ans = 0;
//	
//	for(int i = 49; i >= 7; i--)
//	{
//		ans += i;
//	}
//	
//	cout << ans;
//	
//	return 0;
//}
