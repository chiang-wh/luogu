#include<bits/stdc++.h>
using namespace std;


//P1009 [NOIP 1998 普及组] 阶乘之和
//const int N = 10007;
//
//int n, t = 0;
//int res[N] = {0}, tmp[N] = {0};
//
//int main()
//{
//	cin >> n;
//	tmp[0] = 1;
//	
//	for(int i = 1; i <= n; i++)
//	{
//		for(int j = 0; j < N; j++)
//		{
//			tmp[j] = tmp[j] * i + t;
//			t = tmp[j] / 10;
//			tmp[j] = tmp[j] % 10;
//		}
//		
//		for(int j = 0; j < N; j++)
//		{
//			res[j] += tmp[j];
//			if(res[j] >= 10)
//			{
//				res[j + 1] += res[j] / 10;
//				res[j] = res[j] % 10;
//			 } 
//		}
//	}
//	
//	int flag = N - 1;
//    while (flag > 0 && res[flag] == 0) 
//	{
//        flag--;
//    }
//
//    for (int i = flag; i >= 0; i--) 
//	{
//        cout << res[i];
//    }
//	
//	return 0;
// } 



//P1303 A*B Problem
//int N = 5007;
//
//int main()
//{
//	string s1, s2;
//	int a[N] = {0};
//	int b[N] = {0};
//	int c[N] = {0};
//	
//	cin >> s1 >> s2;
//	
//	int len1 = s1.length();
//	int len2 = s2.length();
//	
//	for(int i = 0, j = len1 - 1; j>=0; i++, j--)
//	{
//		a[i] = s1[j] - '0';
//	}
//	
//	for(int i = 0, j = len2 - 1; j>=0; i++, j--)
//	{
//		b[i] = s2[j] - '0';
//	}
//	
//	for(int i = 0; i < len1; i++)
//	{
//		for(int j = 0; j < len2; j++)
//		{
//			c[i + j] += a[i] * b[j];
//		}
//	}
//	
//	for(int i = 0; i < N; i++)
//	{
//		if(c[i] >= 10)
//		{
//			c[i + 1] += c[i] / 10;
//			c[i] = c[i] % 10;
//		}
//	}
//	
//	int flag = N - 1;
//    while (flag > 0 && c[flag] == 0) {
//        flag--;
//    }
//
//    for (int i = flag; i >= 0; i--) {
//        cout << c[i];
//    }
//	
//	return 0;
//}


//	A+B Problem（高精）
//int main()
//{
//	string s1, s2;
//	int a[507] = {0}, b[507] = {0}, c[507] = {0};
//	cin >> s1 >> s2;
//	
//	for(int i = 0, j = s1.length() - 1; j>=0; i++, j--)
//	{
//		a[i] = s1[j] - '0';
//	}
//	
//	for(int i = 0, j = s2.length() - 1; j>=0; i++, j--)
//	{
//		b[i] = s2[j] - '0';
//	}
//	
//	int index = max(s1.length(), s2.length());
//	
//	int flag = 0;
//	for(int i = 0; i < index; i++)
//	{
//		c[i] = a[i] + b[i] + c[i];
//		flag = i;
//		if(c[i] >= 10)
//		{
//			flag = i + 1;
//			c[i + 1] = c[i] / 10;
//			c[i] = c[i] % 10;
//		}
//	}
//	
//	for(int i = flag; i >= 0; i--)
//	{
//		cout << c[i];
//	}
//	
//	return 0;
//}
