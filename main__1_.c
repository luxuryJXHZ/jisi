#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sici(int a)
{int i;
int t=a;
for(i=0;i<3;i++)
{t=t*a;
}
return t;
}
int main(int argc, char *argv[]) {


int a;
scanf("%d",&a);
if(a<3||a>10)
{printf("error");
}
else
printf("%ld",sici(a)+sici(a+3)+sici(a+6)+sici(a+9)+sici(a+12)+sici(a+15));

 
	return 0;
}


