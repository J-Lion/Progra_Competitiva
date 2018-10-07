#include <bits/stdc++.h>
using namespace std;
int cnt(long int i){
	int c=0,j;
	for (j=0;j<16;j++)
	{
		if (i&(1<<j))
		c++;
	}
	return c;
};

int main (){
	long int i;
	int j,k,x;
	int p,n;
	int max=0;
	bool val= true;
	long int N[102];
	long int A[102];
	
	cin  >> k;
	
	while (k--){
		cin >> p;
		cin >> n;
	
		for (i=0;i<n;i++)
		{
			for (j=0;j<p;j++)
			{
				cin >> x;
				if (x)
				N[i]+=(1<<j);
			}
		}
	
	
	for (i=0;i<(1<<(p));i++)
	{
		if (cnt(i)>max)
		{
		
		for (j=0;j<n;j++)
		{
			for (k=0;k<p;k++)
			{
			if (!(N[j] & (1<<k)))
			x +=((N[j] & (1<<k))<<k);
			}
			A[j]=x; 
		}
		for (j=0;j<n-1 && val ;j++)
		{
			for (k=j+1;k<n &&val;k++)
			{
			if (A[j]==A[k])
			val=false;
			}
		}
		if (val)
		max = cnt(i);
		}
	}
	cout << p-max;
}
}
