#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int shuixianhua(int x)
{
int str[20]={0};
int i,j,k,cnt;
j=0;
k=x;
cnt=0;
while(k>0)
{str[cnt]=k%10;
k=k/10;
cnt++;
}
for(i=0;i<cnt;i++)
{
	j=str[i]*str[i]*str[i]+j;
}
if(j==x)
return 1;
else
return 0; 
}
int main(int argc, char *argv[]) {
int shuixianhua(int x);
int i=101;
for(i=101;i<1000;i++)
{if(shuixianhua(i)==1)
printf("%d\n",i);
	}	
	return 0;
}

