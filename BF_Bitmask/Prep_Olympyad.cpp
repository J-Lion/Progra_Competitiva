#include <bits/stdc++.h>
using namespace std;

int l,r,x;
int cnt (int i)
{	int cnt=0;
	for (int j=0;j<16;j++)
	{
		if (i&(1<<j))
		cnt++;
	}
	return cnt;
}

bool valido(int i ,int n, int * D)
{
	bool val=false;
	int min,max,s=0, c=0,j=0;
	int k = cnt(i);
	for (int j=0;j<n;j++){
	    if (i&(1<<j))
	    {
	        if(c==0) min = D[j];
	        if(c==(k-1)) max = D[j];
	        s+=D[j];
	        c++;
	    }
	}

	if  (l<=s &&  s<=r && x<=(max-min))
	val=true;
	
	return val;
}

int main(){
	int D[16];
	int i;
	int n,ans=0;
	
	cin >> n >>l >>r>>x;
    for (i=0;i<n; i++)
	cin >> D[i];
	
	sort(D,D+n);
	
	for (i=0;i<(1<<n);i++){
		if (cnt(i)>1){
		if (valido(i,n,D))
		ans++;
		}
	}
	cout  << ans;
	}
