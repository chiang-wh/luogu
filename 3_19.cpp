#include<bits/stdc++.h>
using namespace std;

//P1563 玩具谜题
//int n, m;
//int dir[100007] = {0};
//string s[100007];
//int ans_dir[100007] = {0};
//int ans_num[100007] = {0};
//
//int main()
//{
//	cin >> n >> m;
//	for(int i = 0; i < n; i++)
//	{
//		cin >> dir[i] >> s[i];  //逆时针 
//	}
//	
//	for(int i = 0; i < m; i++)
//	{
//		cin >> ans_dir[i] >> ans_num[i]; 
//	}
//	
//	int ans = 0; 
//	for(int i = 0; i < m; i++)
//	{
//		if((ans_dir[i] == 0 && dir[ans] == 0) || (ans_dir[i] == 1 && dir[ans] == 1))
//		 //向左  朝内  --   向右  朝外 
//		{
//			ans = (ans + n - ans_num[i]) % n;
//		}
//		
//		else if((ans_dir[i] == 0 && dir[ans] == 1) || (ans_dir[i] == 1 && dir[ans] == 0)) 
//		//向左  朝外  ++  向右 朝内 
//		{
//			ans = (ans + ans_num[i]) % n;
//		}
//	}
//	
//	cout << s[ans] << endl; 
//	
//	return 0;
//}


//P2670 扫雷游戏
//int n, m;
//char map1[107][107];
//int dx[] = {0, -1, 0, 1, -1, -1, 1, 1};
//int dy[] = {-1, 0, 1, 0, -1, 1, 1, -1};
//
//void dfs(int x, int y)
//{
//	int t = 0;
//	if(map1[x][y] == '*') return;
//	for(int i = 0; i < 8; i++)
//	{
//		int tx = x + dx[i];
//		int ty = y + dy[i];
//		if(map1[tx][ty] == '*') t++;
//	}
//	map1[x][y] = t + '0';
//}
//
//int main()
//{
//	cin >> n >> m;
//	for(int i = 0; i < n; i++)
//	{
//		cin >> map1[i];
//	}
//	
//	for(int i = 0; i < n; i++)
//	{
//		for(int j = 0; j < m; j++)
//		{
//			dfs(i, j);
//		}
//	}
//	
//	for(int i = 0; i < n; i++)
//	{
//		cout << map1[i] << endl;
//	}
//	
//	return 0;
//}


//P1042 [NOIP 2003 普及组] 乒乓球
//int main()
//{
//	string s;
//	char c;
//	int t1 = 0, t2 = 0;
//	
//	while(cin >> c)
//	{
//		if(c == 'E') break;
//		s+=c;
//	}
//	
//	for(auto i : s)
//	{
//		if(i == 'W') t1++;
//		if(i == 'L') t2++;
//		
//		if(max(t1, t2) >= 11 && abs(t1 - t2) >= 2)
//		{
//			cout<< t1 << ":" << t2 << endl;
//			t1 = t2 = 0;
//		}
//	}
//	cout<< t1 << ":" << t2 << endl;
//	
//	cout<< endl;
//	t1 = t2 = 0;
//	
//	for(auto i : s)
//	{
//		if(i == 'W') t1++;
//		if(i == 'L') t2++;
//		
//		if(max(t1, t2) >= 21 && abs(t1 - t2) >= 2)
//		{
//			cout<< t1 << ":" << t2 << endl;
//			t1 = t2 = 0;
//		}
//	}
//	cout<< t1 << ":" << t2 << endl;
//	
//	return 0;
//} 
