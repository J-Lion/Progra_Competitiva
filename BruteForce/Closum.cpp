#include<bits/stdc++.h>
int absdif(int i,int j)
{
	if ((i-j)>0)
	return i-j;
	else 
	return j-i;
};
using namespace std;
int main (){
	int n,i,j,k,m,c=1;
	int closum=10000;
	int C[1010],Q[30];
	
	cin >> n;
	while (n)
	{
	for (i=0;i<n;i++)
	cin >> C[i];
	cin >> m ;
	for (i=0;i<m;i++)
	cin >> Q[i];
	
	cout <<"Case "<<c++<<":";
	for (k=0;k<m;k++)
	{
		for (i=0;i<(n-1);i++)
		{
			for (j=i+1;j<n;j++)
			{
			if ( absdif(Q[k],(C[i]+C[j])) < absdif(Q[k],closum))
			closum = (C[i]+C[j]);
			}
		}
		cout<<"Closest sum to "<<Q[k]<<" is "<<closum<<".";
	}
	
	cin >> n;
	}
	
	

}
