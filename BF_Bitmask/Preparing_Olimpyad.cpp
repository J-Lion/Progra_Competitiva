#include<bits/stdc++.h>
using namespace std;
int main (){
	int dif[20];
	int act[20];
	int i,j,l,r,x;
	int lim,c=0;
	int ans=0;
	int n;
	bool valid = false;
	cin >>n >>  lim >> l >> r >>x;
	
	for (i=0;i<n;i++){
		cin>>dif[i];
	}
	sort (dif, dif+n);
	
	for (i=3;i<(1<<(n+1));i++){
		c=0;
		for (j=0;j<n;j++){
		{
			if((1<<(j+1))&i)
			{
				act[c++]=dif[j];
				if (i==6)
				cout << act[c-1];	
			}
		}
		
		
		
		if (c>1 && l<=act[0] && act[c-1]<=r && x<=(act[c-1]-act[0]))
				ans++; 
		
		}
	}
	cout << ans;
}
