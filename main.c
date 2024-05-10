#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	scanf("%d",&a);
	if(a%2==1||a<0)
	{printf("%d",a/2);
	}
	else
	{
	printf("%d",a*a);}
	return 0;
}



