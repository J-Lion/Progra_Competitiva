#include <bits/stdc++.h>
using namespace std;
int cnt (int n)
{	int cnt=0;
	for (int j=0;j<21;j++)
	{
		if (n&(1<<j))
		cnt++;
	}
	return cnt;
}
bool ami (int i,int k,int m,long int * M)
{
	bool a= false;
	long int n=(M[i]^M[m]);
	if (cnt(n)<=k)
	{
		a= true;
	}
	return a;
}
int main(){
	long int M[1005];
	int n,m,k,ans;
	cin >> n >> m >> k;
	for ( int i=0;i<=m;i++)
	cin >> M[i];
	
	for ( int i=0;i<m;i++)
	{
		if(ami(i,k,m,M))
		ans++;
	}
	cout <<  ans;
}
