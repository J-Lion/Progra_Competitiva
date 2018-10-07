#include <bits/stdc++.h>
using namespace std;
bool comp(int i ,int n,int d,int par[120][2])
{
	int j,k,c=0;
	bool val=true;
	
	for (j=0;j<d && val;j++){
		for (k=0;k<n&&val;k++){
			if (i&(1<<(par[j][0]+1))&(1<<(par[j][2]+1))) 
				val = false;
		}
	}
	return val;
	
}
int cnt(int i){
	int c=0,j;
	for (j=0;j<17;j++)
	{
		if (i&(1<<j))
		c++;
	}
	return c;
}
int main (){
	
	string nom[16];
	string dif[2];
	int par[120][2];
	int n,d,max;
	long int i,j,ans;
	
	cin >> n >> d;
	
	for (i=0;i<n;i++)
		cin >> nom[i];
	
	for (i=0;i<d;i++){
	cin >> dif[0] >> dif[1];
	
		for(j=0;j<n;j++){
			if (!nom[j].compare(dif[0]))
				par[i][0]=j;
			if (!nom[j].compare(dif[1]))
				par[i][1]=j;
	}
	}
	
	for (i=1;i<(1<<n);i++){
		if(comp(i,n,d,par)){
			if (max<cnt(i)){
			ans=i;
			max = cnt(i);	
			}
		}
	}
	
	for(i=0;i<n;i++){
		cout  << cnt(ans) << endl;
		if( ans&(1<<i))
			cout << nom[i] << endl;
	}
	
}
