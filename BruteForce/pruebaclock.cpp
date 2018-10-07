#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#define ancho 100
#define alto 28

imprimir(char * pant)
{
	write(1,pant,ancho*alto-1);
//	printf("%s",pant);
}

int main (){
	double ini = clock();
	char* pant = (char*)malloc((ancho*alto)+1);

	int i,j,conf=0;
	for (i=0;i<ancho;i++)
	{
	for (j=0;j<alto;j++)
	{
		if (i==0||j==0||j==alto-1||i==ancho-1)
		pant[j*ancho+i] = '0';
	}
	}
	pant[ancho*alto] = '\0';

	
	double act =0;
	double delta =0;
	double clo =0,s=0;
	double freq = 1./20.;
	while (!conf)
	{
		imprimir(pant);
		if (getchar()=='\n')
		conf=1;
		
	}

	while (true){
		act = clock();
		delta += ((act-ini)/CLOCKS_PER_SEC); 
		if (delta>freq)
		{
			system("cls");
			imprimir(pant);
			delta =0;
		}
		
		
		
		
		ini = clock();
		
		
	}
}
