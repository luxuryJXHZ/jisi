#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str[5];
	char str1[5];
	int i;
	for(i=0;i<5;i++)
	{scanf("%c",&str[i]);
	}
	for(i=0;i<5;i++)
	{str1[i]=(str[i]-'a'+4)%26+'a';
	}
	for(i=0;i<5;i++)
	{printf("%c",str1[i]);
	}
	return 0;
}
