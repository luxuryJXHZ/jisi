#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float drduo(int n,int x)
{if(n==0){return 1;
}
if(n==1){
	return x;
}
if(n>=2)
{
	return ((2*n-1)*x-drduo(n-1,x)-drduo(n-2,x)*(n-1))/n;
}
}
int main(int argc, char *argv[]) {
	float drduo(int n,int x);
	int n,x;
	float k=0;
	scanf("%d,%d",&n,&x);
	if(n<0)
{	printf("error");}
	else{
	k=drduo(n,x);
		printf("%0.2f",k);	
	}
	return 0;
}

