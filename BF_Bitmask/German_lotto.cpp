#include <bits/stdc++.h>
using namespace std;
int main (){
	int i,j,n=1,c,num[15];
	
	while (n){
	
	cin >> n;
	for (i=0;i<n;i++)
	cin >> num[i];
	
	for (i=0;i<(1<<(n+1));i++)
	{
	    c=0;
	    for (j=0;j<n;j++)
	    {if((1<<(j+1))&i)
	    c++;
	    }
	    if(c==6){
		for (j=0;j<n;j++)
		{
		if((1<<(j+1))&i)
		cout<<num[j]<<" ";
	    }}
		cout<< endl; 
	}
}
}

