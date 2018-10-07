#include<bits/stdc++.h>
using namespace std;
int main (){
	int c=0,n,i,j;
	int N[1000];
	cin >> c;
	while(c--)
	{
		cin >> n;
		for (i=0;i<n;i++)
		{
		cin >> N[i];	
		}
		for (i=n-1;i>0;i--)
		{
			for(j=0;j<i;j++)
			{
				if (N[j]<=N[i])
				c++;
			}
		}
		cout << c;
	}
}
