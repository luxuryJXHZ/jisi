#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void boblesort(int pt[],int Cnt)
{int     k      = 0;
int temp = 0;
	while (Cnt > 0)
	{
		for (k=0; k<Cnt-1; k++)
		{
			if (pt[k] > pt[k+1])
			{
				temp    = pt[k];
				pt[k]   = pt[k+1];
				pt[k+1] = temp;
			}
		}
		Cnt--;
	}
}
int jiancai(int a[],int b[],int i,int j){
	int ret=1,k;
	if(i!=j) ret=0;
else
for(k=0;k<i;k++)
	{if(a[k]!=b[k])
		{ret=0;
		break;
		}
	}
	return ret;
}
int main(int argc, char *argv[]) {
	void boblesort(int pt[],int Cnt);
	int jiancai(int a[],int b[],int i,int j);
int a[20];int b[20];
int i,j,k,l;
int p=0,q=0;
scanf("%d\n",&i);
for(k=0;k<i;k++)
{scanf("%d",&a[k]);
}
scanf("\n");
scanf("%d\n",&j);
for(k=0;k<j;k++)
{scanf("%d",&b[k]);
}
boblesort(a,i);
boblesort(b,j);
printf("%d\n",jiancai(a,b,i,j));
for(k=p;k<i+1;)
	{for(q=k;q<i+1;q++)
		{if(a[k]!=a[q]){
		printf("%d %d\n",a[k],q-k);
		k=q;
		break;}
		}
}
return 0;   
}


