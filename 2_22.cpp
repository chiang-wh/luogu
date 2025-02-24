#include<bits/stdc++.h>
using namespace std;
#define ll long long

//P1088 火星人
int main()
{
	int n, m, t = 0;
	vector<int>temp;
	vector<vector<int>>num;
	
	cin >> n >> m;
	vector<int>a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	
	do{
		temp.clear();
		for(int i = 0; i < n; i++)
		{
			temp.push_back(a[i]);
		}
		num.push_back(temp);
	}while(next_permutation(a.begin(), a.end()));
	
	for(int i = 0; i < num.size(); i++)
	{
		if(num[i] == vector<int>(a.begin(), a.end()))
		{
			for(int j = 0; j < num[i + m].size(); j++)
			{
				cout << num[i + m][j] << ' ';
			}
		}
	}
	
	return 0;
}


//P1706 全排列问题
//int n, a[27]; 
//
//void permute(int a[], int start, int end)
//{
//	if(start == end)
//	{
//		for(int i = 0; i < n; i++) cout << setw(5) << a[i];
//		cout << endl;
//		return;
//	}
//	
//	for(int i = start; i <= end; i++)
//	{
//		swap(a[i], a[start]);
//		permute(a, start + 1, end);
//		swap(a[i], a[start]);
//	}
//}
//
//int main()
//{
//	cin >> n;
//	
//	for(int i = 0; i < n; i++) a[i] = i + 1;
//	
//	permute(a, 0, n - 1);
//	
//	return 0; 
//}


//int main()
//{
//	int n; cin >> n;
//	int a[1007];
//	
//	for(int i = 0; i < n; i++) a[i] = i + 1;
//	
//	do
//	{
//		for(int i = 0; i < n; i++) cout << setw(5) << a[i];
//		cout << endl; 
//	}while(next_permutation(a, a + n));
//	
//	return 0;
//}


//P1157 组合的输出
//int n, r, flag = 0;
//int num[3];
//
//void backtrack(int start, int select)
//{
//	num[select] = start;
//	
//	if(select == r)
//	{
//		for(int i = 1; i <= r; i++) cout << setw(3) << num[i];
//		cout << endl;
//		return;
//	}
//	
//	for(int i = start; i < n; i++)
//	{
//		backtrack(i + 1, select + 1);
//	 } 
//}
//
//int main()
//{
//	cin >> n >> r; 
//	
//	backtrack(0, 0);
//	
//	return 0;
//}


//P1036 选数
//ll n,k,num[20];
//ll sum=0,count1=0;
//vector<bool>is_prime(1000007,true);
//vector<ll>primes;
//
//void Prime()
//{
//	is_prime[0]=is_prime[1]=false;
//	
//	for(int i=2;i<=999999;i++)
//	{
//		if(is_prime[i]) primes.push_back(i);
//		for(int j=0;i*primes[j]<=999999 && j<=primes.size();j++)
//		{
//			is_prime[i*primes[j]]=false;
//			if(i%primes[j]==0) break;
//		}
//	}
//}
//
//bool is_Prime(ll x)
//{
//	for(auto i:primes)
//	{
//		if(i==x) return true;
//	}
//	return false;
//}
//
//void backtrack(ll start,ll select,ll sum)
//{
//	if(select==k)
//	{
//		if(is_Prime(sum)) count1++;
//		return;
//	}
//	for(int i=start;i<n;i++)
//	{
//		backtrack(i+1,select+1,sum+num[i]);
//	}
//}
//
//int main()
//{
//	cin>>n>>k;
//	for(int i=0;i<n;i++) cin>>num[i];
//	
//	Prime();
//	backtrack(0,0,0);
//	
//	cout<<count1;
//	
//	return 0;
// } 
