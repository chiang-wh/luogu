#include<bits/stdc++.h>
using namespace std;
#define ll long long


//P3799 Ð¡ Y Æ´Ä¾°ô
//int main()
//{
//	ll n, count = 0;
//	ll a[100007];
//	vector<vector<ll>>v;
//	cin >> n;
//	
//	for(int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	
//	for(ll i = 0; i < n; i++)
//	{
//		for(ll j = 0; j < n; j++)
//		{
//			for(ll k = 0; k < n; k++)
//			{
//				for(ll l = 0; l < n; l++)
//				{
//					if(i != j && i != k && i != l && j != k && j != l && k != l && a[i] == a[j] && a[j] == a[k] + a[l]) 
//					{
//						vector<ll> temp;
//						int flag = 0;
//						temp.push_back(i);temp.push_back(j);temp.push_back(k);temp.push_back(l);
//						sort(temp.begin(), temp.end());
//						
//						for(int x = 0; x < v.size(); x++)
//						{
//							if(v[x] == temp)
//							{
//								flag = 1;break;
//							}
//						}
//						
//						if(flag == 0)
//						{
//							v.push_back(temp);
//							count++;
//						}
//					}
//				}
//			}
//		}
//	}
//	
//	cout << count % (1000000000 + 7);
//	
//	return 0;
// } 
