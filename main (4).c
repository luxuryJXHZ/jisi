#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int max(int a,int b)
{if(a<b) return b;
else return a;
}
int min(int a,int b)
{if(a<b) return a;
else return b;
}
int main(int argc, char *argv[]) {
	int a,b,c,d,e,f;
	scanf("%d,%d,%d,%d",&a,&b,&c,&d);
	e=min(a,b);
	f=max(c,d);
	printf("%d",e+f);
	
	return 0;
}

