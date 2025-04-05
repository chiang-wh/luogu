#include<bits/stdc++.h>
using namespace std;
#define ll long long



////P3397 地毯
//const int N = 1007;
//int a[N][N] = {0}, dif[N][N] = {0};
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	
//	for(int i = 0; i < m; i++)
//	{
//		int x1, y1, x2, y2;
//		cin >> x1 >> y1 >> x2 >> y2;
//		
//		dif[x1][y1] ++;
//		dif[x1][y2+1] --;
//		dif[x2+1][y1] --;
//		dif[x2+1][y2+1] ++;
//	}
//	
//	for(int i = 1; i <= n; i++)
//	{
//		for(int j = 1; j <= n; j++)
//		{
//			a[i][j] = a[i-1][j] + a[i][j-1] -a[i-1][j-1] + dif[i][j];
//			cout << a[i][j] << ' ';
//		}
//		cout << endl;
//	}
//	
//	return 0;
//}



////P2367 语文成绩
//const int N = 5e6 + 7;
//int a[N] = {0}, dif[N] = {0};
//
//int main()
//{
//	int n, p;
//	cin >> n >> p;
//	
//	for(int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//		dif[i] = a[i] - a[i-1];
//	}
//	
//	for(int i = 0; i < p; i++)
//	{
//		int x, y, z;
//		cin >> x >> y >> z;
//		
//		dif[x] += z;
//		dif[y+1] -=z;
//	}
//	
//	int ans = N;
//	for(int i = 1; i <= n; i++)
//	{
//		a[i] = a[i-1] + dif[i];
//		ans = min(ans, a[i]);
//	}
//	
//	cout << ans;
//	
//	return 0;
//}



////P1719 最大加权矩形
//const int N = 127;
//
//int main()
//{
//	int n;cin >> n;
//	
//	int a[N][N] = {0}, sum[N][N] = {0};
//	for(int i = 1; i <= n; i++)
//	{
//		for(int j = 1; j <= n; j++)
//		{
//			cin >> a[i][j];
//			sum[i][j] = sum[i][j-1] + sum[i-1][j] - sum[i-1][j-1] + a[i][j];
//		}
//	}
//	
//	int ans = 0;
//	for(int x1 = 1; x1 <= n; x1++)
//	{
//		for(int y1 = 1; y1 <= n; y1++)
//		{
//			for(int x2 = x1; x2 <= n; x2++)
//			{
//				for(int y2 = y1; y2 <= n; y2++)
//				{
//					ans = max(ans, sum[x2][y2] - sum[x1-1][y2] 
//									- sum[x2][y1-1] + sum[x1-1][y1-1]);
//				}
//			}
//		}
//	}
//	
//	cout << ans;
//	
//	return 0;
//}



////P8218 【深进1.例1】求区间和
//const int N = 1e5 + 7;
//
//int main()
//{
//	int n, a[N] = {0}, sum[N] = {0};
//	cin >> n;
//	
//	for(int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//		i == 1 ? sum[i] = a[i] : sum[i] = sum[i-1] + a[i];
//	}
//	
//	int m;cin >> m;
//	for(int i = 0; i < m; i++)
//	{
//		int l, r;
//		cin >> l >> r;
//		cout << sum[r] - sum[l-1] << endl;
//	}
//	
//	return 0;
//}



////P2036 [COCI 2008/2009 #2] PERKET
//int n, ans = 0x7f7f7f;
//int s[17] = {0}, b[17] = {0};
//int sun_s, sum_b;
//
//void dfs(int no, int sum_s, int sum_b)
//{
//	if(sum_s != 1 && sum_b != 0) ans = min(ans, abs(sum_s - sum_b));
//	
//	if(no >= n) return;
//	
//	dfs(no + 1, sum_s, sum_b);
//	dfs(no + 1, sum_s * s[no], sum_b + b[no]);
//}
//
//int main()
//{
//	cin >> n;
//	
//	for(int i = 0; i < n; i++)
//	{
//		cin >> s[i] >> b[i];
//	}
//	
//	dfs(0, 1, 0);
//	
//	cout << ans;
//	
//	return 0;
//}



////P1036 [NOIP 2002 普及组] 选数
//const int N = 1e5 + 7;
//
//int n, k, flag = 0, ans = 0, sum = 0;
//int a[27] = {0};
//vector<int> primes;
//vector<bool>is_primes(N, true);
//
//void prime()
//{
//	is_primes[0] = is_primes[1] = false;
//	
//	for(int i = 2; i < N; i++)
//	{
//		if(is_primes[i]) primes.push_back(i);
//		
//		for(int j = 0; j < primes.size() && i * primes[j] < N; j++)
//		{
//			is_primes[i * primes[j]] = false;
//			if(i % primes[j] == 0) break;
//		}
//	}	
//}
//
//bool is_prime(int x)
//{
//	for(int i = 0; i < primes.size(); i++)
//	{
//		if(x == primes[i]) return true;
//	}
//	return false;
//}
//
//void dfs(int t)
//{
//	sum += a[t];
//	flag++;
//	
//	if(flag == k)
//	{
//		if(is_prime(sum)) ans++;
//		sum -= a[t];
//		flag--;
//		return;
//	}
//	
//	for(int i = 1; i <= n - k + 1; i++) 
//	{
//		if(t + i < n) dfs(t + i);
//	}
//	sum -= a[t];
//	flag--;
//}
//
//int main()
//{
//	cin >> n >> k;
//	for(int i = 0; i < n; i++) cin >> a[i];
//	
//	prime();
//	
//	for(int i = 0; i <= n - k; i++) 
//	{
//		dfs(i);sum = 0;
//	}
//	
//	cout << ans;
//	
//	return 0;
//}



////P2392 kkksc03考前临时抱佛脚
//const int N = 607;
//
//int time(int s, int t, int (&arr)[27])
//{
//	int dp[27][N] = {0}, sum_w = 0;
//	
//	for(int i = 0; i < t; i++) dp[0][i] = 0;
//	for(int i = 0; i < s; i++) dp[i][0] = 0;
//	
//	for(int i = 1; i <= s; i++)
//	{
//		for(int j = 1; j <= t; j++)
//		{
//			if(arr[i] + sum_w > j) dp[i][j] = dp[i-1][j];
//			else dp[i][j] = max(dp[i-1][j], dp[i-1][j-arr[i]] + arr[i]);
//		}
//	}
//	
//	return dp[s][t];
//}
//
//int main()
//{
//	int s1, s2, s3, s4;
//	cin >> s1 >> s2 >> s3 >> s4;
//	
//	int A[27] = {0}, B[27] = {0}, C[27] = {0}, D[27] = {0};
//	int sum_A = 0, sum_B = 0, sum_C = 0, sum_D = 0; 
//	for(int i = 1; i <= s1; i++) 
//	{
//		cin >> A[i];sum_A += A[i];
//	}
//	for(int i = 1; i <= s2; i++) 
//	{
//		cin >> B[i];sum_B += B[i];
//	}
//	for(int i = 1; i <= s3; i++)
//	{
//		cin >> C[i];sum_C += C[i]; 
//	}
//	for(int i = 1; i <= s4; i++) 
//	{
//		cin >> D[i];sum_D += D[i]; 
//	}
//	
//	int A_t = sum_A - time(s1, sum_A / 2, A);
//	int B_t = sum_B - time(s2, sum_B / 2, B);
//	int C_t = sum_C - time(s3, sum_C / 2, C);
//	int D_t = sum_D - time(s4, sum_D / 2, D);
//	
//	cout << A_t + B_t + C_t + D_t;
//	
//	return 0;
//}



////P1024 [NOIP 2001 提高组] 一元三次方程求解
//int main()
//{
//	int a, b, c, d;
//	cin >> a >> b >> c >> d;
//	
//	double arr[3] = {0};
//	int t = 0;
//	
//	for(double i = -100; i <= 100; i += 0.01)
//	{
//		if(abs(a*i*i*i + b*i*i + c*i + d) < 1e-6) arr[t++] = i;
//	}
//	
//	sort(arr, arr + 3);
//	
//	for(int i = 0; i < 3; i++)
//	{
//		cout << fixed << setprecision(2);
//		cout << arr[i] << ' ';
//	}
//	
//	return 0;
//}
//
//int a, b, c, d, t = 0;
//double arr[3] = {0};
//
//double f(double x)
//{
//	return a*x*x*x + b*x*x + c*x + d;
//}
//
//void find(double l, double r)
//{
//	if(t >= 3) return;
//	if(l > r) return;
//	
//	double mid = (l + r) / 2;
//	double f_mid = f(mid), f_l = f(l), f_r = f(r);
////	cout << f_mid << ' ' << f_l << ' ' << f_r << endl;
//	if(abs(f_mid) < 1e-6) 
//	{
//		arr[t++] = mid;return;
//	}
//	if(abs(f_l) < 1e-6)
//	{
//		arr[t++] = l; find(l + 0.01, r);
//	}
//	else if(abs(f_r) < 1e-6)
//	{
//		arr[t++] = r; find(l, r - 0.01);
//	}
//	if(f_l * f_mid <= 0) find(l, mid - 0.01);
//	if(f_mid * f_r <= 0) find(mid + 0.01, r);
//}
//
//int main()
//{
//	cin >> a >> b >> c >> d;
//	
//	find(-2, 5);
//	
//	for(auto i : arr) cout << i <<' ';
//	
//	return 0;
// } 
