#include<bits/stdc++.h>
using namespace std;
#define ll long long


////P1102 A-B 数对
//const int N = 2e5 + 7;
//
//ll n, c, ans = 0, a[N] = {0};
//
//int main()
//{
//	cin >> n >> c;
//	
//	for(int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	
//	sort(a, a + n);
//	
//	for(int i = 0; i < n; i++)
//	{
//		ans += (upper_bound(a, a + n, a[i] + c) - a) 
//				- (lower_bound(a, a + n, a[i] + c) - a);
//	}
//	
//	cout << ans;
//	
//	return 0;
//}


////P2249 【深基13.例1】查找
//const int N = 1e6 + 7;
//
//int n, m, a[N] = {0};
//
//int find(int x)
//{
//	int l = 1, r = n;
//	while(l <= r)
//	{
//		int mid = l + r >> 1;
//		if(a[mid] < x) l = mid + 1;
//		else if(a[mid] > x) r = mid - 1;
//		else
//		{
//			if(mid == 1 || a[mid - 1] != x) return mid;
//			else r = mid - 1;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	cin >> n >> m;
//	
//	for(int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//	}
//	
//	for(int i = 0; i < m; i++)
//	{
//		int tmp;
//		cin >> tmp;
//		cout << find(tmp) << ' ';
//	}
//	
//	return 0;
//}


////P1803 凌乱的yyy / 线段覆盖
//const int N = 1e6 + 7;
//
//int n;
//
//struct Node
//{
//	int a;
//	int b;
//}com[N];
//
//bool cmp(Node x, Node y)
//{
//	return x.b < y.b;
//}
//
//int main()
//{
//	cin >> n;
//	
//	for(int i = 0; i < n; i++)
//	{
//		cin >> com[i].a >> com[i].b;
//	}
//	
//	sort(com, com + n, cmp);
//	
//	int t = 0, ans = 0;
//	for(int i = 0; i < n; i++)
//	{
//		if(t <= com[i].a)
//		{
//			ans++;t = com[i].b;
//		}
//	}
//	
//	cout << ans;
//	
//	return 0;
//}


////P1223 排队接水
//int n;
//double sum_t = 0;
//
//struct Node
//{
//	int no;//第i个人
//	int t;//接水时间
//	int w;
//}a[1007]; 
//
//bool cmp(Node x, Node y)
//{
//	return x.t < y.t;
//}
//
//int main()
//{
//	cin >> n;
//	for(int i = 1; i <= n; i++)
//	{
//		a[i].no = i;
//		cin >> a[i].t;
//	}
//	
//	sort(a + 1, a + n + 1, cmp);
//	
//	for(int i = 1; i <= n; i++)
//	{
//		cout << a[i].no << ' ';
//		i == 1 ? a[i].w = 0 : a[i].w = a[i - 1].w + a[i - 1].t;
//		sum_t += a[i].w;
////	sum_t += a[i].t * (n - i);
//	}
//	
//	cout << endl;
//	printf("%.2f\n", sum_t / n);
//	
//	return 0;
//}


////P2240 【深基12.例1】部分背包问题
//int main()
//{
//	int n, t;
//	double m[107] = {0};
//	double v[107] = {0};
//	double m_v[107] = {0};
//	
//	cin >> n >> t;
//	
//	for(int i = 0; i < n; i++)
//	{
//		cin >> m[i] >> v[i];
//		m_v[i] = (v[i] * 1.0) / m[i];
//	}
//	
//	double sum_m = 0;
//	double sum_v = 0;
//	
//	while(1)
//	{
//		double max_m_v = 0, max_m = 0, max_v = 0;
//		int tmp = -1;
//		for(int i = 0; i < n; i++)
//		{
//			if(m_v[i] > max_m_v)
//			{
//				max_m_v = m_v[i];max_m = m[i];max_v = v[i];tmp = i;
//			}
//		}
//		
//		if(tmp != -1)
//		{
//			m_v[tmp] = 0;m[tmp] = 0;v[tmp] = 0;
//		}
//		else break;
//		
//		if(t - sum_m < max_m)
//		{
//			sum_v += (t - sum_m) * max_m_v;
//			break;
//		}
//		
//		sum_m += max_m;sum_v += max_v;
//		if(sum_m > t * 1.0) break;
//	}
//	
//	printf("%.2f\n", sum_v);
//	
//	return 0;
// } 
