#include<bits/stdc++.h>
using namespace std;
#define ll long long


//P1618 三连击（升级版）
//int main()
//{
//	ll x,y,z;cin>>x>>y>>z;
//	int flag=0;
//	
//	for(ll a=1;a<=9;a++)
//	{
//		for(ll b=1;b<=9;b++)
//		{
//			for(ll c=1;c<=9;c++)
//			{
//				for(ll d=1;d<=9;d++)
//				{
//					for(ll e=1;e<=9;e++)
//					{
//						for(ll f=1;f<=9;f++)
//						{
//							for(ll g=1;g<=9;g++)
//							{
//								for(ll h=1;h<=9;h++)
//								{
//									for(ll i=1;i<=9;i++)
//									{
//										if((a*100+b*10+c)*1.0/(d*100+e*10+f)==x*1.0/y && (d*100+e*10+f)*1.0/(g*100+h*10+i)==y*1.0/z && 
//										    a!=b && a!=c && a!=d && a!=e && a!=f && a!=g && a!=h && a!=i && b!=c && b!=d && b!=e && b!=f && b!=g && b!=h && b!=i
//											&& c!=d && c!=e && c!=f && c!=g && c!=h && c!=i && d!=e && d!=f && d!=g && d!=h && d!=i
//											&& e!=f && e!=g && e!=h && e!=i && f!=g && f!=h && f!=i && g!=h && g!=i && h!=i) 
//											{
//												cout<<(a*100+b*10+c)<<' '<<(d*100+e*10+f)<<' '<<(g*100+h*10+i)<<endl;
//												flag++;	
//											}
//									}
//								}
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	
//	if(flag==0) cout<<"No!!!"<<endl;
//	
//	return 0;
//}


//P2089 烤鸡
//int main()
//{
//	ll n;cin>>n;
//	ll count=0;
//	
//	for(ll a=1;a<=3;a++)
//	{
//		for(ll b=1;b<=3;b++)
//		{
//			for(ll c=1;c<=3;c++)
//			{
//				for(ll d=1;d<=3;d++)
//				{
//					for(ll e=1;e<=3;e++)
//					{
//						for(ll f=1;f<=3;f++)
//						{
//							for(ll g=1;g<=3;g++)
//							{
//								for(ll h=1;h<=3;h++)
//								{
//									for(ll i=1;i<=3;i++)
//									{
//										for(ll j=1;j<=3;j++)
//										{
//											if(a+b+c+d+e+f+g+h+i+j==n) count++;
//										}
//									}
//								}
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	cout<<count<<endl;
//	
//	for(ll a=1;a<=3;a++)
//	{
//		for(ll b=1;b<=3;b++)
//		{
//			for(ll c=1;c<=3;c++)
//			{
//				for(ll d=1;d<=3;d++)
//				{
//					for(ll e=1;e<=3;e++)
//					{
//						for(ll f=1;f<=3;f++)
//						{
//							for(ll g=1;g<=3;g++)
//							{
//								for(ll h=1;h<=3;h++)
//								{
//									for(ll i=1;i<=3;i++)
//									{
//										for(ll j=1;j<=3;j++)
//										{
//											if(a+b+c+d+e+f+g+h+i+j==n) cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<' '<<f<<' '<<g<<' '<<h<<' '<<i<<' '<<j<<endl;
//										}
//									}
//								}
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	
//	return 0;
// } 


//P2241 统计方形（数据加强版）
//int main()
//{
//	int n,m;
//	cin>>n>>m;
//	
//	int x=0,y=0;
//	
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=m;j++)
//		{
//			x+=min(i,j);
//			y+=i*j;
//		}
//	}
//	
//	cout<<x<<' '<<y-x;
//	
//	return 0;
//}
