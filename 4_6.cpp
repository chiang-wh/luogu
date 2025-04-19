#include<bits/stdc++.h>
using namespace std;
#define ll long long


////P1115 最大子段和
//const int N = 2e5 + 7;
//
//int main()
//{
//	int n; cin >> n;
//	
//	int a[N] = {0};
//	for(int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//	}
//	
//	int now_sum = a[1];
//	int ans = a[1];
//	
//	for(int i = 2; i <= n; i++)
//	{
//		now_sum = max(now_sum + a[i], a[i]);
//		ans = max(ans, now_sum);
//	}
//	
//	cout << ans;
//	
//	return 0;
//}



////P1226 【模板】快速幂
//int main()
//{
//	ll a, b, p;
//	cin >> a >> b >> p;
//	ll old_a = a, old_b = b;
//	
//	ll ans = 1;
//	while(b > 0)
//	{
//		if(b % 2)
//		{
//			ans = (ans * a) % p;
//		}
//		b = b >> 1;
//		a = (a * a) % p;
//	}
//	
//	cout << old_a << '^' << old_b << " mod " << p << '=' << ans; 
//	
//	return 0;
//}



////P1177 【模板】排序
//const int N = 1e5 + 7;
//
//int main()
//{
//	int n;
//	cin >> n;
//	
//	int a[N] = {0};
//	for(int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	
//	sort(a, a + n);
//	
//	for(int i = 0; i < n; i++) cout << a[i] << ' ';
//	
//	return 0;
// } 
