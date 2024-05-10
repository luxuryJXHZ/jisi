#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int zhengchu(int x,int y) 
{if(x%y==0)
{return 1;
 } 
 else {
 return 0;} 
} 
int main(int argc, char *argv[]) {
	int k,a,b,c;
	scanf("%d",&k);
	a=zhengchu(k,3);
	b=zhengchu(k,5);
	c=zhengchu(k,7);
	if(a==1&&b==1&&c==1)
	{printf("Can be divisible by 3,5,7.");
	}
	if(a==1&&b==1&&c==0)
	{printf("Can be divisible by 3,5.");
	}
	if(a==1&&b==0&&c==1)
	{printf("Can be divisible by 3,7.");
	}
	if(a==0&&b==1&&c==1)
	{printf("Can be divisible by 5,7.");
	}
	if(a==0&&b==0&&c==1)
	{printf("Can be divisible by 7.");
	}
	if(a==1&&b==0&&c==0)
	{printf("Can be divisible by 3.");
	}
	if(a==0&&b==1&&c==0)
	{printf("Can be divisible by 5.");
	}
	if(a==0&&b==0&&c==0)
	{printf("Can not be divisible by 3,5,7.");
	}
	return 0;
}

