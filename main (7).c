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
int main(int argc, char *argv[]) {
	void boblesort(int pt[],int Cnt);
	int a[5];
	int i;
	for(i=0;i<5;i++)
	{scanf("%d",&a[i]);
	}
	boblesort(a,5);
	for(i=0;i<5;i++)
	{printf("%d ",a[i]);
	}
	return 0;
}
