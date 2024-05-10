#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float fblq(int x)
{if(x==1){return 1;
}
if(x==2){
	return 2;
}
if(x>=3)
{
	return fblq(x-1)+fblq(x-2);
}
}
int main(int argc, char *argv[]) {
	float fblq(int x);
	int i,j;
	float k=0,p=0;
	scanf("%d",&i);
	for(j=1;j<=i;j++)
	{p=fblq(j+1)/fblq(j);
	k=k+p;
	}
	printf("%0.2f",k);
	return 0;
}

