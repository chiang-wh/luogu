#include<bits/stdc++.h>
using namespace std;
#define ll long long


int a, b, c, d;
double arr[3] = {0};
int t = 0; 


double f(double x)
{
	return a*x*x*x + b*x*x + c*x + d;
}

void search(double l, double r)
{
	if (r - l < 1e-6) 
	{  
    	if (abs(f(l)) < 1e-6) arr[t++] = l;return;
	}
	if(t >= 3) return ;
	
	double mid = (l + r) / 2;
		
	if(abs(f(mid)) < 1e-6) 
	{
		arr[t++] = mid;return;
	}
	if(f(l) * f(mid) < 0) search(l, mid);
	if(f(mid) * f(r) < 0) search(mid, r);
}

int main()
{
	cin >> a >> b >> c >> d;
	
	search(-100, 100);
	
	sort(arr, arr + 3);
	
	for(auto i : arr)
		cout << fixed << setprecision(2) << i << ' ';
	
	return 0;
}






//int main()
//{
//	int a, b, c, d;
//	cin >> a >> b >> c >> d;
//	
//	double arr[3] = {0};
//	int t = 0;
//	
//	for(int i = -100; i <= 100; i++)
//	{
//		if(a*i*i*i + b*i*i + c*i + d == 0) arr[t++] = i;
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





////P1873 [COCI 2011/2012 #5] EKO / ¿³Ê÷
//const ll N = 1e6 + 7;
//
//ll n, m, a[N] = {0};
//
//int check(ll x)
//{
//	ll ans = 0;
//	for(int i = 0; i < n; i++)
//	{
//		if(a[i] > x)
//		{
//			ans += a[i] - x;
//		}
//	}
//	
//	return ans >= m ? 1 : 0;
//}
//
//int main()
//{
//	cin >> n >> m;
//	ll mmax = -1;
//	
//	for(int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//		mmax = max(mmax, a[i]); 
//	}
//	
//	ll l = 0, r = mmax, h = 0;
//	
//	while(l <= r)
//	{
//		int mid = l + r >> 1;
//		if(check(mid))
//		{
//			h = mid;l = mid + 1;
//		}
//		else
//		{
//			r = mid - 1;
//		}
//	}
//	
//	cout << h;
//	
//	return 0;
// } 
