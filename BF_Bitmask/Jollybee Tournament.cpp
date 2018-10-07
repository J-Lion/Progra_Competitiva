#include <bits/stdc++.h>
int ans=0;

void compara (int i , char*C )
{
	char a = C[2*i]+C[(2*i)-1];
	if(a==1){
		C[i] = 1;
		ans++;
	}
	else {
		if(a==2)
			C[i]= 1;
		else
			C[i]= 0;
	}
}
using namespace std;
int main (){
	int k;
	int n,m,aux,a;
	char C[1030];
	fill(C,C+1030,1);
	
	
	cin >> k;
	while (k--)
	{
	 cin >> n >> m;
	 aux = m;
	 while(aux--)
	 {
	 	cin >> a;
		C[a]=0;
	 }
	 
	 while(n)
	 {
	 	for(int i=1;i<=(1<<(n-1));i++)
	 	compara(i,C);
	 	n--;
	 }
	 
	 cout << ans<< endl;
	 ans = 0;
	 fill(C,C+1030,1);
	}
}
