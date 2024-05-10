#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	float e;
	scanf("%d",&a);
	if(a<=200)
	{e=a*0.8;
	}
	else if(a<=300)
	{e=160+0.9*(a-200);
	}
	else
	{
	e=250+a-300;
	}
	if(e<=100)
	{printf("100.00");
	}
	else if(e<400)
{printf("%0.2f",e);}
else
{printf("%0.2f",1.15*e);
}
	return 0;
}

