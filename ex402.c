#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int isprime (int x)
{ int ret=0;
int i=0;
if(x==0||x==1)
{ret=0;
}
for(i=2;i<x;i++)
	{if(x%i==0)
		{ret=0;
		break;
		}
		else ret=1;
	}
return ret;
}
int main(int argc, char *argv[]) {
	int isprime (int x);
	int i,j,k;
	scanf("%d,%d",&i,&j);
	j=j-2;
	for(k=i;k<=j;k++)
	{if(isprime(k)==1&&isprime(k+2)==1)
		{printf("%d,%d",k,k+2);
		printf("\n");
		}
	}
	return 0;
}

