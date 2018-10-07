#include <bits/stdc++.h>
using namespace std;
int main (){
	long int n;
	int c=0,a=0,b=0,i;
	
	cin >>n;
	while (n)
	{
		for (i=0;i<32;i++)
		{
			if ((1<<i)&n)
			{
				if(c&1)
				b+=(1<<i);
				else
				a+=(1<<i);
				c++;
			}
		}
		cout << a << " " << b<< endl;
		cin >> n;
	}
}
