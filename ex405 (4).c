#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int oushu(int x)
{
if(x%2==0) {
return 1;}
else  
{return 0;}
}
int main(int argc, char *argv[]) {
	int oushu(int x);
	int a[8];
	int i=0;
	int sum=0;
	for(i=0;i<8;i++)
{scanf("%d",&a[i]);
}
	for(i=0;i<8;i++)
{if(oushu(a[i])==1)
{sum=sum+a[i];
}
}
printf("%d",sum);
}

