#include<bits/stdc++.h>
using namespace std;




//P1219 °Ë»Êºó Checker Challenge
//int n, flag = 0, count1 = 0;
//int row[14] = {0}, col[14] = {0}, main_diagonal[27] = {0}, anti_diagonal[27] = {0}, result[14] = {0};
//
//void dfs(int x)
//{
//	if(x == n + 1) 
//	{ 	
//		count1++;
//		
//		if(count1 <= 3)
//		{
//			for(int i = 1; i <= n; i++) cout << result[i] << ' ';
//			cout << endl;
//		}
//
//		return;
//	}
//	
//	for(int y = 1; y <= n; y++)
//	{
//		if(x > 0 && x <= n && y > 0 && y <= n && row[x] == 0 && col[y] == 0 && main_diagonal[x - y + n] == 0 && anti_diagonal[x + y] == 0)
//		{
//			row[x] = 1; col[y] = 1; main_diagonal[x - y + n] = 1; anti_diagonal[x + y] = 1;
//			result[x] = y;
//			dfs(x + 1);
//			row[x] = 0; col[y] = 0; main_diagonal[x - y + n] = 0; anti_diagonal[x + y] = 0;
//		}
//	}
//}
//
//int main()
//{
//	cin >> n;
//	
//	dfs(1);
//	
//	cout << count1 << endl;
//	
//	
//	return 0;
// } 
