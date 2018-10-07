#include <bits/stdc++.h>
using namespace std;
int main (){
	int t,d,q;
	int i,j,c,ans;
	int pr[10010][2];
	string marca [10010];
	
	int pre[1010];
	
	cin >>t ; 
	while (t--){
	cin >>d;
	for( j=0;j<d;j++)
		{
			cin >> marca[j];
			cin >> pr[j][0];
			cin >> pr[j][1];
		}
	
	cin >>q;
	
	for(j=0;j<q;j++)
		cin>> pre[j];
				
	
	for (i=0;i<q;i++){
		c=0;ans=0;
		for(j=0;j<d;j++){
			if((pre[i] >= pr[j][0]) && (pre[i] <= pr[j][1]) )
			{
			ans=j;
			c++;
			}
		}
		
		if(c==1)
			cout <<marca[ans]<< endl;
		else
		 	cout << "UNDETERMINED" << endl;
	}
	if(j!=1)
	cout << endl;
	}	
}
