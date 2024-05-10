#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 int ishuiwen(int n)
 {	int i,j,k;
 int cnt=0;
  int ret=1;
 int t=n;
 if(n==0)
 {return 1;}
 while(n>0)
 {n=n/10;
 cnt=cnt+1;
 } 
 int str[100];
 for(i=cnt;i>0;i--)
 {str[i]=t%10;
 t=t/10;
 }
 for(i=1;i<=cnt;i++)
 {j=cnt-i+1;
 if(str[i]!=str[j])
 {ret=0;
 break;
 }
 }
 return ret; 
 }
int main(int argc, char *argv[]) {
	int n,i,j,k;
	int cnt=0;
	scanf("%d",&n);
	int huiwen[10000];
	for( i=0;i<=n;i++)
	{if(ishuiwen(i)==1)
	{   huiwen[cnt]=i;
		cnt++;
		}
	}
	for(j=0;j<cnt;j++)	{
	printf("%d,",huiwen[j]);
	  if(j%10==9)
	  {printf("\n");
	   } 
	  }

return 0;
}



