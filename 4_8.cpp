#include<bits/stdc++.h>
using namespace std;
#define ll long long


////P1010 [NOIP 1998 普及组] 幂次方
//void func(int n)
//{
//	if(n == 1) 
//	{
//		cout << "2(0)";return;
//	}
//	if(n == 2) 
//	{
//		cout << "2";return;
//	}
//	
//	int flag = 0;
//	for(int i = 20; i >= 0; i--)
//	{
//		if(n >= pow(2, i))
//		{
//			n -= pow(2, i);
//			if(flag) cout << '+';
//			flag = 1;
//			
//			if(i == 0)
//			{
//				cout << "2(0)";
//			}
//			
//			else if(i == 1)
//			{
//				cout << "2";
//			}
//			
//			else
//			{
//				cout << "2(";
//				func(i);
//				cout << ')';
//			}
//		}
//	}
//}
//
//int main()
//{
//	int n;cin >> n;
//	
//	func(n);
//	
//	return 0;
//}



////P1008 [NOIP 1998 普及组] 三连击
//int main()
//{
//	for(int a = 1; a < 10; a++)
//	{
//		for(int b = 1; b < 10; b++)
//		{
//			for(int c = 1; c < 10; c++)
//			{
//				for(int d = 1; d < 10; d++)
//				{
//					for(int e = 1; e < 10; e++)
//					{
//						for(int f = 1; f < 10; f++)
//						{
//							for(int g = 1; g < 10; g++)
//							{
//								for(int h = 1; h < 10; h++)
//								{
//									for(int i = 1; i < 10; i++)
//									{
//										if(a != b && a != c && a != d &&
//										 a != e && a != f && a != g && 
//										 a != h && a != i && b != c &&
//										 b != d && b != e && b != f &&
//										 b != g && b != h && b != i &&
//										 c != d && c != e && c != f &&
//										 c != g && c != h && c != i &&
//										 d != e && d != f && d != g && 
//										 d != h && d != i && e != f &&
//										 e != g && e != h && e != i &&
//										 f != g && f != h && f != i &&
//										 g != h && g != i && h != i &&
//										 (d*100+e*10+f)/(a*100+b*10+c)==2 &&
//										 (d*100+e*10+f)%(a*100+b*10+c)==0 &&
//										 (g*100+h*10+i)/(a*100+b*10+c)==3 &&
//										 (g*100+h*10+i)%(a*100+b*10+c)==0)
//										 cout<<a<<b<<c<<' '<<d<<e<<f<<' '<<g<<h<<i<<endl;
//									}
//								}
//							}
//							
//						}
//					}
//				}
//			}
//		}
//	}
//	
//	return 0;
//}



////P1257 平面上的最接近点对
//const int N = 1e4 + 7;
//
//struct Node
//{
//	double x;
//	double y;
//}point[N];
//
//int main()
//{
//	int n;cin >> n;
//	for(int i = 0; i < n; i++)
//	{
//		cin >> point[i].x >> point[i].y;
//	}
//	
//	double ans = 999999;
//	for(int i = 0; i < n; i++)
//	{
//		for(int j = i + 1; j < n; j++)
//		{
//			double tmp_x = (point[i].x - point[j].x) * (point[i].x - point[j].x);
//			double tmp_y = (point[i].y - point[j].y) * (point[i].y - point[j].y);
//			ans = min(ans, sqrt(tmp_x + tmp_y));
//		}
//	}
//	
//	printf("%.4f\n", ans);
//	
//	return 0;
//}



////P2415 集合求和
//vector<int> v;
//
//int main()
//{
//	int tmp;
//	while(cin >> tmp)
//	{
//		v.push_back(tmp);
//	}
//	
//	int n = v.size();
//	ll ans = 0;
//	
//	for(int i = 0; i < n; i++)
//	{
//		ans += v[i] * pow(2, n - 1);
//	}
//	
//	cout << ans;
//	
//	return 0;
// } 
